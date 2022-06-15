#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0b110111;
    int count=0;
    while(a!=0){
        a=a&(a-1);
        count++;
        //TC: O(number of setBit)
        //This is Optimal Sol than other one
    }

    // while(a!=0)
    // {
    //     if(a&1==1)
    //     count++;
    //     a=a>>1;
    //TC: O(MSB)
    // }
    cout<<"Set bit: "<<count<<endl;
}