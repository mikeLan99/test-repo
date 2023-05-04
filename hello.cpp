#include<bits/stdc++.h>

using namespace std;

// dynamic programming solution 

int solve(int i , vector<int>&nums)
{
    if(i==nums.size())
        return 0;

    
    int take = nums[i] + solve(i+1,nums);

    int notTake = solve(i+1,nums);

    return max(take,notTake);
}


int main()
{
    int res  = solve(0,nums);

    cout<<res;

    return 0;

}