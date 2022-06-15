#include<bits/stdc++.h>
using namespace std;
int toDecimal(string Hexa){

    int decimal=0;
    for(int i=0; i<Hexa.size(); i++)
    {
        decimal*=16;
        if(Hexa[i]>='0' && Hexa[i]<='9')
        decimal+=Hexa[i]-'0';
         else if(Hexa[i]=='A')
         decimal+=10;
         else if(Hexa[i]=='B')
         decimal+=11;
         else if(Hexa[i]=='C')
         decimal+=12;
         else if(Hexa[i]=='D')
         decimal+=13;
         else if(Hexa[i]=='E')
         decimal+=14;
         else if(Hexa[i]=='F'){
             decimal+=15;
         }
    }
    return decimal;
}
int main()
{
    int d=toDecimal("10");
    cout<<d<<endl;

}