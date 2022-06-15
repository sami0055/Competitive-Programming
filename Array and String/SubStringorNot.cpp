#include<bits/stdc++.h>
using namespace std;
const int N=105;
char s1[N],s2[N];

int isSubString()
{
    int len1=strlen(s1);
    for(int i=0; i<len1; i++)
    {
        int flag=1;
        int len2=strlen(s2);
        for(int j=0; j<len2; j++)
        {
            if(i+j>=len1)
            {
                flag=0;
                break;
            }
            if(s1[i+j]!=s2[j]){
                flag=0;
                break;
            }
        }
        if(flag)
        return 1;

    }
    return 0;
}


int main()
{
     freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    
     scanf("%s %s",s1,s2);
   if(isSubString())
   cout<<"Yes"<<endl;
   else
   cout<<"No"<<endl; 


}
  
    
