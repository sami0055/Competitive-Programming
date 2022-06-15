#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    long long int a,b,d=0;
   long long int count=0,l=1;
    while(t--){
     cin>>a>>b;
      count=0;
     for(int i=a; i<=b; i++){
         int k=i;
         d=0;
         for(int j=1; j<=i; j++)
         {
             d=d+j*pow(10,k-1);
             cout<<"d="<<d<<"+"<<j<<"*"<<"pow("<<"10"<<","<<k<<"-1"<<")"<<";"<<endl;
             cout<<d<<endl;
             cout<<"j ="<<j<<endl;
             k--;
         }
         cout<<"i="<<i<<endl;
         if(d%3==0)
         count++;
         cout<<count<<endl;

     }

     cout<<"Case "<<l<<": "<<count<<endl;
      l++;
    }
}
