#include<bits/stdc++.h>

using namespace std;

// dynamic programming solution 

int solve(int i , vector<int>&nums , vector<int>&dp)
{
    if(i==nums.size())
        return 0;

    if(dp[i] != -1)
        return dp[i];

    
    int take = nums[i] + solve(i+1,nums,dp);

    int notTake = solve(i+1,nums,dp);

    return dp[i] =  max(take,notTake);

}


int main()
{
    int n = nums.size();
    vector<int>dp(n);
    int res  = solve(0,nums,dp);

    cout<<res;

    return 0;

}