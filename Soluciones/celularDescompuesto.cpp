#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>

int a[100];
int fac(int n){
	if(n<2)return n;

	if(a[n]!=0)return a[n];
	else{
		return a[n]=fac(n-1)+fac(n-2);
	} 
}
int main(int argc, char const *argv[])
{
	a[0]=0;
    a[1]=1;
	int n;
	scanf("%i",&n);
	int x=fac(n);
	printf("%i %i", a[n-1], x);
	return 0;
}