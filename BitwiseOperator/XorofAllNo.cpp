#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int Xor=0;
     for(int i=1; i<=n; i++)
     {
         Xor^=i;
     }
     cout<<Xor<<" ";
// if(n%4==0)
// cout<<n<<endl;
// else if(n%4==1)
// cout<<1<<endl;
// else if(n%4==2)
// cout<<n+1<<endl;
// else 
// cout<<0<<endl;

}