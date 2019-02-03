#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

unsigned v[100000];
//contadores
unsigned i2=0,i3=0,i5=0;
//multiplos
unsigned m2=2,m3=3,m5=5;
//min
unsigned mi=1;
unsigned ugly(unsigned n){
	for (int i = 1; i < n; i++)
	{
		mi=min(m2,min(m3,m5));
		v[i]=mi;
		if(mi==m2){
			i2++;
			m2=m2*2;
		}
		if (mi==m3)
		{
			i3++;
			m3=m3*3;
		}
		if (mi==m5)
		{
			i5++;
			m5=m5*5;
		}

	}
	return mi;
}
int main(int argc, char const *argv[])
{
	v[0]=1;
	int n;
	//scanf("%i",&n);
	cin>>n;
	cout<<ugly(n);
	return 0;	
}