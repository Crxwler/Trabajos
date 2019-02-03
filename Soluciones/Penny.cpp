#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long int n1,n2,flag=1,i=2,aux=0;
	scanf("%ld %ld",&n1,&n2);
	long int area=n1+n2;
	if(n1==0 || n2==0){
		printf("%ld %ld",max(n1,n2),min(n1,n2));
	}
	while(flag){
		if (area%i==0)
		{
			aux=area/i;
			long int pp=(i*2)	+ ((aux*2)-4);
			if( pp==n1 || pp==n2){
			printf("%ld %ld",max(aux,i),min(aux,i));
			return 0;			
			}
		}
		i++;
	}
	return 0;
}