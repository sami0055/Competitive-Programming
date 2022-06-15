#include<bits/stdc++.h>
using namespace std;
const int N=105;
int A[N];
//Time Complexity is: O(q*N);
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int n,t;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&t);
    int l,r;
    while(t--)
    {
       
        scanf("%d%d",&l,&r);
         int sum=0;
        for(int i=l; i<=r; i++){
            sum+=A[i];
        }
        printf("%d\n",sum);

    }



}