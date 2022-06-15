
#include<bits/stdc++.h>
using namespace std;
const int N=105;
char s[N];
//TC: O(N)

int main()
{

 freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
  scanf("%s",s);
  int len=strlen(s);

  int maxlen=0;
  for(int center=0; center<len; center++)
  {
    int cur_len=1;
    for(int k=1; center-k>=0 && center+k<len; k++)
    {
        if(s[center-k]!=s[center+k])
        break;
        cur_len+=2;
    }
    if(cur_len>maxlen)
    maxlen=cur_len;
  }
    
    cout<<"Max Len: "<<maxlen<<endl;

}