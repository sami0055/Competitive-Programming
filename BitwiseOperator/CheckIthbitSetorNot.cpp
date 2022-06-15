#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b=0b10001;
    int musk=1<<3;
    if(musk&b)
    cout<<"ith bit is set: ";
    else{
        cout<<"ith bit is not set";
    }
}