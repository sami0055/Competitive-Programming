#include<bits/stdc++.h>
using namespace std;
int main(){
     int r,n;
     int decimal_Num=0;
    //   freopen("in.txt","r",stdin);
    //  freopen("out.txt","w",stdout);
    while(true)
     {
      cin>>n;
      if(n==0)
        break;
   for(int i=0; n!=0; i++)
  {
    r=n%10;
    n=n/10;
    decimal_Num=decimal_Num+r*(pow(2,i+1)-1);
  }
   cout<<decimal_Num<<endl;
   decimal_Num=0;

 }

}
