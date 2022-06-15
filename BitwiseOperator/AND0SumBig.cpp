#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5,M=N;
const int mod=1000000007;
int main(){ 
  int t,k;
  ll n,ans;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
      ans=1;
    for(ll i=0; i<k; i++)
    {
      ans=(ans*n)%mod;
    }
    cout<<ans<<endl;
    
     
    
      
  }

}