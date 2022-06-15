#include<bits/stdc++.h>
using namespace std;
const int N=105;
char s[N];
int main()
{
     freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    scanf("%s",s);

    int len=strlen(s);
    int maxlen=0;
    for(int c1=0,c2=c1+1; c1<len-1; c1++,c2++)
    {
        int curLen=0;
        for(int k=0; c1-k>=0 && c2+k<len; k++)
        {
            if(s[c1-k]!=s[c2+k])
            break;
            curLen+=2;

        }
        if(curLen>maxlen)
        maxlen=curLen;
        
    }

    cout<<"MAx for even len: "<<maxlen<<endl;
    

}