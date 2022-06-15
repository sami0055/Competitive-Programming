#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    cin>>l>>r;
    // int ans;
    // for(int i=l; i<=r; i++)
    // {
    //    ans^=i;
    //    cout<<ans<<" ";
    // }
   // cout<<ans<<endl;
    if(r%4==0)
    cout<<r+1<<" ";
    else if(r%4==3)
    cout<<1<<" ";
    else if(r%4==2)
    cout<<r<<" ";
    else {
        cout<<0<<" ";
    }
}