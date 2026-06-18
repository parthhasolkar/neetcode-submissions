class Solution {
public:
int fun(int ind, vector<int>&coins,int amount,int n){
      if(amount==0) return 0;
      if(amount<0) return 1e9;
if(ind==n) return 1e9;
      int pick = 1+fun(ind,coins,amount-coins[ind],n);
      int notPick=fun(ind+1,coins,amount,n);
      return min(pick,notPick);
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int res =  fun(0,coins,amount,n);
        if(res >=1e9) return -1;
        return res;
    }
};
