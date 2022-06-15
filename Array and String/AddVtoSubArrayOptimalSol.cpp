#include<bits/stdc++.h>
using namespace std;
int const N=105;
int A[N],update_sum[N],point_update[N];
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
        update_sum[l]+=v;
        update_sum[r+1]-=v;
    }
    point_update[0]=update_sum[0];
    for(int i=1; i<n; i++)
    {
        point_update[i]=point_update[i-1]+update_sum[i];

    }
     
     for(int i=0; i<n; i++)
     {
        cout<<A[i]+point_update[i]<<" ";
       
     }


}