#include<bits/stdc++.h>
using namespace std;

string toHexa(int decimal)
{
    string digits="0123456789ABCDEF";
    string Hexa;

    while(decimal!=0){
         Hexa+=digits[decimal%16];
         decimal/=16;
    }
    reverse(Hexa.begin(),Hexa.end());
    return Hexa;

}
int main()
{
    string H=toHexa(15);
    cout<<H<<endl;

}