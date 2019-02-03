#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
int dp[1000];

int fac(int n) {
	if(n<2)return n;
	if(dp[n]!=0)return dp[n];
	else return dp[n]=(fac(n-1)+fac(n-2))%1000000007;
}
int main(int argc, char const *argv[])
{
	dp[0]=0;dp[1]=1;
	int x;
	scanf("%i",&x);
	for (int i = 0; i < x; ++i)
	{
		int n;
		scanf("%i",&n);
		printf("%i\n", fac(n)%1000000007);
	}
	return 0;
}