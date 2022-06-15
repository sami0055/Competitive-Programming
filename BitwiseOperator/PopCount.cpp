#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int c=0b1111101000100;
    printf("%d\n",__builtin_popcount(c));//total zeros
    printf("%d",__builtin_ctz(c));//trailing zeros
    printf("\n%d\n",__builtin_clz(c));//leading zeros
   
}