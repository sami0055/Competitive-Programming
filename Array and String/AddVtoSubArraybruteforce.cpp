#include<bits/stdc++.h>
using namespace std;
const int N=105;
int A[N];

//TC: O(q*N)
int main()
{
   

   freopen("in.txt","r",stdin);
  freopen("out.txt","w",stdout);
  int n;
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cin>>A[i];
  }

  int t;
  cin>>t;
  while(t--)
  {
    int l,r,v;
    cin>>l>>r>>v;
    
    for(int i=l; i<=r; i++)
    {
        A[i]+=v;

    }
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
  }

}