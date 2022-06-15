#include<bits/stdc++.h>
using namespace std;
int toDecimal(string binary){
     
     int decimal=0;
     for(int i=0; i<binary.size(); i++)
     {
         decimal*=2;
         decimal+=binary[i]-'0';

     }

     return decimal;

   


}
int main(){
    
    int d=toDecimal("1001111");
    cout<<d<<endl;
}