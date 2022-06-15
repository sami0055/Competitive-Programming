#include<bits/stdc++.h>
using namespace std;
int main(){

freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);

  int day,month,year;
  scanf("%d/%d/%d",&day,&month,&year);
  printf("Day= %d \nMonth= %d\nYear= %d \n",day,month,year);
   scanf("%d.%d.%d",&day,&month,&year);
    printf("Day= %d \nMonth= %d\nYear= %d \n",day,month,year);

     int hr,min,second;
     scanf("%d:%d:%d",&hr,&min,&second);
     printf("Hour: %d Min: %d Second: %d",hr,min,second);



}