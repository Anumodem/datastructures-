#include <stdio.h> 
  
#if defined( _WIN32 ) 
typedef __int64 az_int64_t; 
typedef unsigned __int64 az_uint64_t; 
#define I64(x) x ## I64 
#define F64 "I64" 
#else 
typedef long long az_int64_t; 
typedef unsigned long long az_uint64_t; 
#define I64(x) x ## ll 
#define F64 "ll" 
#endif 
  
#define MAXN (100*1024) 
  
struct link 
{ 
  az_int64_t t; 
  int u, v; 
}; 
  
struct link links[MAXN]; 
int n, m, k; 
az_int64_t c[64]; 
  
int gr[MAXN]; 
  
int getgr( int g ) 
{ 
  return (g == gr[g]) ? g : (gr[g] = getgr( gr[g] )); 
} 
  
int test( az_int64_t r ) 
{ 
  int i, left = n-1, u, v; 
  for(i=1;i<=n;++i) gr[i] = i; 
  for( i = 0; i < m; ++i) 
    if( (links[i].t & r) == 0 && 
        (u = getgr( links[i].u )) != (v = getgr( links[i].v )) ) 
    { 
       gr[v] = u; 
       if( --left == 0 ) return 1; 
    } 
  return 0; 
} 
  
int main( void ) 
{ 
  az_int64_t rejected = 0, sum = 0; 
  int i; 
  
  scanf( "%d %d %d", &n, &m, &k); 
  for( i = 0; i < k; ++i) scanf( "%" F64 "d", &c[i]); 
  for( i = 0; i < m; ++i) 
  { 
    int l, id; 
    scanf( "%d %d %d", &links[i].u, &links[i].v, &l); 
    while( l-- > 0 ) 
    { 
      scanf( "%d", &id); 
      links[i].t |= I64(1) << (id-1); 
    } 
  } 
  
  if( !test( 0 ) ) 
  { 
    printf( "-1\n" ); 
    return 0; 
  } 
  
  for( i = k-1; i >= 0; --i) 
  { 
    az_int64_t f = I64(1) << i; 
    if( test( rejected | f ) ) rejected |= f; else sum += c[i]; 
  } 
  
  printf( "%" F64 "d\n", sum); 
  return 0; 
}
