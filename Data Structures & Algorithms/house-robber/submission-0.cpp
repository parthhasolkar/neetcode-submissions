class Solution {
public:
int fun(int ind,vector<int>&dp,vector<int>&nums){
    // base case
    if(ind>=nums.size()) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int pick = nums[ind] + fun(ind+2,dp,nums);
    int notPick = fun(ind+1,dp,nums);
    return dp[ind] = max(pick,notPick);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return fun(0,dp,nums);

    }
};
