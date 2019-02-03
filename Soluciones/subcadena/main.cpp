#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int sub(char*a,int a2,char*b,int b2){
    if(a2==0 || b2==0)return 0;

    if(a[a2-1] == b[b2-1]) return 1+sub(a,a2-1,b,b-1);

    return max(sub(a,a-1,b,b2),sub(a,a2,b,b2-1));
}

int main()
{
    char* a="gimnasia";
    char* b="magnesia";

    int a2=sizeof(a)/sizeof(a[0]);
    int b2=sizeof(b)/sizeof(b[0]);
    printf("%i %i\n",a2,sub(a,a2,b,b2));
    return 0;
}
