#include<bits/stdc++.h>

using namespace std;
const int N=105;
char s1[N],s2[N];
int freq1[30],freq2[30];

int isAnagram()
{
    for(int i=0; s1[i]; i++)
    {
        freq1[s1[i]-'a']++;
    }
    for(int i=0; s2[i]; i++)
    {
        freq2[s2[i]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(freq1[i]!=freq2[i])
        {
            return 0;
            break;
        }
    }
    return 1;
    
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

     scanf("%s %s",s1,s2);

     if(isAnagram())
     cout<<"yes"<<endl;
     else{
        cout<<"No"<<endl;
     }
}