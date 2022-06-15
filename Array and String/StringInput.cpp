#include<bits/stdc++.h>
using namespace std;
int main()
{
     freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    
    char s1[105],s2[105];
    scanf("%s %s",s1,s2);
    printf("%s\n%s\n",s1,s2);
    //s1[]={'s','a','m','i','u','l','\0'};
    s1[2]='\0';
    printf("%s",s1);
     cout<<endl;
     s1[2]='m';
    for(int i=0; s1[i]; i++)
    {
        cout<<s1[i];
    }
    cout<<endl;
    int len=strlen(s1);
    cout<<"Length is: "<<len<<endl;
    
}