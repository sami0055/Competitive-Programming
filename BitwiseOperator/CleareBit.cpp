#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a=0b101;
    int m=1<<2;
    if(a&m)
    {
    //   m=~m;
    //   a^=m;
    //   a=~a;
    m=~m;
    a=a&m; 
    }
    else{
        cout<<"Bit is already clear";
    }
    cout<<a<<endl;
}