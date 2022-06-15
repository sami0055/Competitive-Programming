#include<bits/stdc++.h>
using namespace std;
int main(){

    double H,U,D,F;
    int count=0;
    double dis;
    double Hfc=0;
    double dc;
    double Hfs=0;
    int t;
    cin>>t;
    while(t--){

       Hfc=0;
       Hfs=0;
       count=0;
        cin>>H>>U>>D>>F;
        if(H==0 && U==0 && D==0 && F==0)
        break;
       while(Hfc<=H){
        dis=Hfs;
        Hfc=U;
        dc=Hfc-Hfs*(F/100.0);
        U=dc;
        Hfc=dis+dc;
        Hfs=Hfc-D;
        ++count;
        cout<<Hfc<<endl;
      // cout<<count<<endl;

       }
     cout<<"success on day "<<count<<endl;
    }

}
