#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=0b0111001;
    int b=0b1110110;
    int c=__builtin_popcount(a^b);
    cout<<c<<endl;
}