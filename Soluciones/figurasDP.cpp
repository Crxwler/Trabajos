#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int c[500],p[500],g,n;
int Sack(int val[], int wt[], int n, int W) 
{ 
    int dp[W+1]; 
    memset(dp, 0, sizeof(dp));  
    for(int i=0; i < n; i++)  
        for(int j=W; j>=wt[i]; j--) 
            dp[j] = max(dp[j] , val[i] + dp[j-wt[i]]); 
    return dp[W]; 
} 

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>g>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>c[i]>>p[i];
	}
	std::cout<<Sack(p,c,n,g);
	return 0;
}

