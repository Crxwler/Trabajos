#include <stdio.h>
#include <stdlib.h>


int a[10000];
int c=0;
int fibo(int n){
    c++;
if(n<2)return n;
if(a[n]!=0)return a[n];
    else {
    a[n-1]=fibo(n-1);
    return fibo(n-2)+fibo(n-1);
}
}
int main()
{
    int n;
    scanf("%i",&n);
    printf("%i %i",fibo(n-1),fibo(n));
    //printf("%i",c);
    return 0;
}
