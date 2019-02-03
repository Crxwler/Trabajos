#include <stdio.h>
#include <stdlib.h>

int items[]={2,3,5};

int bola(int cap,int n){
if(cap==0 || n==0)return 0;
if(items[n-1]>cap)
    return bola(cap,n-1);
}


int main()
{
    int n;
    //scanf("%i",&n);
    printf("%i",bola(13,5));
    return 0;
}
