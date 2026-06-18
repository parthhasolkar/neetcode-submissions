class Solution {
public:
int fun(int ind, vector<int>&coins,int amount,int n,vector<vector<int>>&dp){
      if(amount==0) return 0;
      if(amount<0) return 1e9;
if(ind==n) return 1e9;
if(dp[ind][amount]!=-1) return dp[ind][amount];
      int pick = 1+fun(ind,coins,amount-coins[ind],n,dp);
      int notPick=fun(ind+1,coins,amount,n,dp);
      return dp[ind][amount]=min(pick,notPick);
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        int res =  fun(0,coins,amount,n,dp);
        if(res >=1e9) return -1;
        return res;
    }
};
