#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int r, n;
    long long int decimal_Num = 0;
    //   freopen("in.txt","r",stdin);
    //  freopen("out.txt","w",stdout);
    while (true)
    {
        cin>>n;
        if (n == 0)
            break;

        int i = 0;
        cout<<n<<endl;
        while (n > 0)
        {
            r = n % 10;
            decimal_Num = decimal_Num + r * (pow(2, (i + 1)) - 1);
            cout <<r<<"*"<<"(2^"<<(i+1)<<"-1)="<< decimal_Num << "\n";
            n = n / 10;
            i++;
        }

        cout << decimal_Num << endl;
        decimal_Num = 0;
    }
}
