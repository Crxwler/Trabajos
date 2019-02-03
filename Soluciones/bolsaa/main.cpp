#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

void show(int a[],int asize){
for(int i=0;i<asize;i++){
    printf("%i\n",a[i]);
}
}
int main()
{
    int a[]={10,123,3,6,43,3,1,9,7,199};
    int asize = sizeof(a) / sizeof(a[0]);
    printf("before\n");
    show(a,asize);
    sort(a,a+asize);
    printf("after\n");
    show(a,asize);

    if(binary_search(a,a+asize,3)) printf("si esta");
    else printf("no esta");
    return 0;
}
