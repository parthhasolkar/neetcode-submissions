class Solution {
public:
int fun(int ind,vector<int>&dp){
    if(ind==0) return 1;
    if(ind==1) return 1;
    if(dp[ind]!=-1) return dp[ind];
    int step1 = fun(ind-1,dp);
    int step2= fun(ind-2,dp);
    return dp[ind]=step1+step2;
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return fun(n,dp);
    }
};
