
#include<bits/stdc++.h>
using namespace std;
#define long long ll;
#define mod=1000000007;
const int N=3e5,M=N;
int a[N];

int main(){
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

   int p[10]={1,1,2,5,3,2,3,4,7,4};

  int Xor=0;
  for(int i=0; i<10; i++){
      Xor^=p[i];
  }

  int count=0;
  while(Xor){
      if(Xor&1)
        break;
      count++;
    Xor= Xor>>1;
  }

   int Xor1=0,Xor2=0;

  for(int i=0; i<10; i++){
      if(p[i]&(1<<count))
      {
         Xor1^=p[i];
      }
      else{
          Xor2^=p[i];
      }
  }
  cout<<Xor1<<" "<<Xor2;

}
