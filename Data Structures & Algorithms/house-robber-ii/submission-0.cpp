class Solution {
public:
int fun(int ind,int end,vector<int>&nums,vector<int>&dp){
   if(ind > end)
    return 0;
     if(dp[ind]!=-1) return dp[ind];
    int pick = INT_MIN;
  pick = nums[ind] + fun(ind+2,end,nums,dp);
    int notPick = fun(ind+1,end,nums,dp);
    return dp[ind]=max(pick,notPick);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        int case1 = fun(0,n-2,nums,dp1);
        int case2 = fun(1,n-1,nums,dp2);
        return max(case1,case2);
    }
};
