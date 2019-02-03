
// C++ program of a space optimized DP solution for 
// 0-1 knapsack problem. 
#include<bits/stdc++.h> 
using namespace std; 
  
// val[] is for storing maximum profit for each weight 
// wt[] is for storing weights 
// n number of item 
// W maximum capacity of bag 
// dp[W+1] to store final result 
int KnapSack(int val[], int wt[], int n, int W) 
{ 
    // array to store final result 
    //dp[i] stores the profit with KnapSack capacity "i" 
    int dp[W+1]; 
      
    //initially profit with 0 to W KnapSack capacity is 0 
    memset(dp, 0, sizeof(dp)); 
  
    // iterate through all items 
    for(int i=0; i < n; i++)  
        //traverse dp array from right to left 
        for(int j=W; j>=wt[i]; j--) 
            dp[j] = max(dp[j] , val[i] + dp[j-wt[i]]); 
    /*above line finds out maximum of  dp[j](excluding ith element value) 
      and val[i] + dp[j-wt[i]] (including ith element value and the 
      profit with "KnapSack capacity - ith element weight") */    
    return dp[W]; 
} 
  
// Driver program to test the cases 
int main() 
{ 
    int val[] = {7, 8, 4}, wt[] = {3, 8, 6}, W = 10, n = 3; 
    cout << KnapSack(val, wt, n, W) << endl; 
    return 0; 
} 