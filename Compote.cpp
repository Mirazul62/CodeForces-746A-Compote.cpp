#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,i,count=0;
    cin>>a>>b>>c;
    for(i=1;i<=a;i++)
    {
        if(i*2<=b && i*4<=c)
          ///  cout<<i<<" "<<i*2<<" "<<i*4;
            count=i+i*2+i*4;
    }
    cout<<count<<endl;;

}
