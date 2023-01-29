#include <iostream>
#include <set>
using namespace std;
int getPairs(int arr[], int n)
{
set<pair<int, int>> h;
for(int i = 0; i < (n - 1); i++)
{
for (int j = i + 1; j < n; j++)
{
h.insert(make_pair(arr[i], arr[j]));
}
}
return h.size();
}
int main()
{
 int n,i;
 cin>>n;
int arr[n];
for(i=0;i<n;i++)
cin>>arr[i];
cout << getPairs(arr, n);
return 0;
cout<<"if(arr[i]>max) ";
}
