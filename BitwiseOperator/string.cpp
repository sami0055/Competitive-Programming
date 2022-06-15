#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    // associates standard input with input.txt 
    freopen("in.txt", "r", stdin);
    // associates standard output with output.txt
    // (this will create a new file called output.txt if none exists)
	freopen("out.txt", "w", stdout);
    string x;
    // reads the input.txt file and stores in string x
    getline(cin, x);
    // prints string x in output.txt file
    cout << x; 
    
    return 0;
}