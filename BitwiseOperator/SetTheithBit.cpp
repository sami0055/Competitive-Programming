#include<bits/stdc++.h>
using namespace std;
int main(){

    int a=0b0011;
    int i=2;
    int musk=1<<i;
       if(musk&a)
       {
           cout<<"Ith bit is set already";
       }
       else{
           a=a|musk;
         
       }
     
     if(musk&a)
     cout<<"set complete"<<endl;
     cout<<a<<endl;

}