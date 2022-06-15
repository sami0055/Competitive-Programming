#include<bits/stdc++.h>
using namespace std;
int main()
{
   
     int s;
     cin>>s;
     int*arr=new int[s];
    for(int i=0; i<s; i++)
    {
        cin>>arr[i];
    }
   
   int result=0;
   for(int i=0; i<s; i++)
   {
       result^=arr[i];
   }
   cout<<"Number occurence once is: "<<result;
}