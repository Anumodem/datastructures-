#include <iostream>

using namespace std;

int main()
{
    int N,c=1,i;
    float width,height;
    cin>>N;
    for(i=0;i<N;i++)
       {
           
           cin>>width>>height;
           if(width/height>=1.6 && width/height<=1.7)
              {
                  c++;
                  
              }
            else if(height/width >=1.6 && height/width<=1.7)
                  {
                      c++;
                  }
        
       }
     cout<<c;
    return 0;
}
