#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
       int i=1;
        int a,b,c;
    while(t--)
    {


        cin>>a>>b>>c;
        if(a>b && a<c || a>c && a<b)
        {
            cout<<"Case "<<i<<": "<<a<<endl;
        }
        else if(b>a && b<c|| b>c && b<a)
        cout<<"Case "<<i<<": "<<b<<endl;
        else if(c>a && c<b || c>b && c<a)
        cout<<"Case "<<i<<": "<<c<<endl;


         i++;
    }
}
