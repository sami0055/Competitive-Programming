#include<bits/stdc++.h>
using namespace std;

const int N=105;
char s1[N],s2[N];

int isSubsequence()
{
    int len1=strlen(s1);
    int len2=strlen(s2);
    int i=0,j=0;
    int count=0;
    while (j<len2)
    {
        while(i<len1 && j<len2)
        {
               
      if(s1[i]==s2[j])
      {
        i++;
        j++;
        break;
      }
      else{
        i++;
      }   
        }
        if(i==len1)
         break;     
    }
    if(j==len2)
    return 1;
    else
    return 0;

}
int main()
{
     freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
  
    int t;
    cin>>t;
    while(t--)
    {
      scanf("%s %s",s1,s2);
      
       if(isSubsequence())
    {
        cout<<"Yes subsequence"<<endl;
    }
    else{
        cout<<"Not a subsequence"<<endl;
    }
    }

   

}