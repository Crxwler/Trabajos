#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <algorithm>

int dp[1000];
int gold(int n){
 if(n==1)return 1;

 if(dp[n]!=-1)return dp[n];
  return dp[n]=gold(n/2)+gold(n/4)+gold(n/3);
}

int main(int argc, char const *argv[])
{
	int n,n2;
	scanf("%i %i",&n,&n2);
	int x=gold(n);
	printf("%i\n",x );
	printf("%i\n",gold(n2) );
	return 0;

}
