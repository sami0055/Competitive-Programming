#include<bits/stdc++.h>
using namespace std;
const int N=1000000;
int A[N],Csum[N];

//Time Complexity is : O(N)
int main()
{
  // freopen("in.txt","r",stdin);
  // freopen("out.txt","w",stdout);
  int n,l,r,t;
  scanf("%d",&n);
  for(int i=0; i<n; i++)
  {
      scanf("%d",&A[i]);
  }

  //TC: O(N)

  for(int i=0; i<n; i++)
  {
    if(i==0)
    Csum[i]=A[i];
    else{
      Csum[i]=Csum[i-1]+A[i];
    }
  }
  
  cin>>t;
  //Tc: O(t)
  while(t--)
  {
    cin>>l>>r;
    int sum=0;
    if(l==0)
    {
      sum=Csum[r];
    }
    else{
      sum=Csum[r]-Csum[l-1];
    }
    cout<<sum<<endl;
  }
  //Total TC: O(t+N)=O(N)



  
}