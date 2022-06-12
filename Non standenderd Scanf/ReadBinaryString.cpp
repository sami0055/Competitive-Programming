#include<bits/stdc++.h>
using namespace std;
int main(){
    // char str[20];
    // scanf("%[01]s",str);
    // printf("%s\n",str);

    //read only abc
    char str1[20];
    // scanf("%[abc]s",str1);
    // printf(str1);
    //read untill this char are found
    cout<<"enter a string"<<endl;
   scanf("%[^abc]s",str1);
   cout<<str1<<endl;
}