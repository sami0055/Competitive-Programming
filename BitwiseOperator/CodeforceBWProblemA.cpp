#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5,M=N;
int a[N];
int main()
{

   
     ll t,x,n;
     cin>>t;
     while(t--)
     {
         cin>>n;
         for(int i=0; i<n; i++)
         {
             cin>>a[i];
         }
         x=a[0];
         for(int i=1; i<n; i++)
         {
             x&=a[i];
         }
          cout<<x<<endl;
     }
    

   



}