#include<bits/stdc++.h>
using namespace std;

string toBinary(int decimal)
{
     
     string binary;
    while(decimal!=0)
    {
     binary+=string(1,'0'+decimal%2);
     decimal/=2;
    }
    reverse(binary.begin(),binary.end());
    return binary;
}
int main()
{
    
  
   string b= toBinary(19);
   cout<<b<<endl;
    return 0;

}