#include<bits/stdc++.h>
using namespace std;
const int N=105; 
char s[N];

int isPalindrome()
{

   int i=0;
   int len=strlen(s);
   int j=len-1;
   while (i<j)
   {
    if(s[i]!=s[j])
    return 0;
    i++;
    j--;
   }
   return 1;
   
}

int main()
{


    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    scanf("%s",s);
    if(isPalindrome())
    {
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }

}