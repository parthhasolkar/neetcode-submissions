class Solution {
public:
vector<vector<int>>arr;
void fun(int ind, vector<int>& nums, vector<int>&ds,int target){
    if(ind==nums.size()){
        if(target==0) arr.push_back(ds);
        return ;
    }
    if(nums[ind] <=target){
        ds.push_back(nums[ind]);
        fun(ind,nums,ds,target-nums[ind]);
        ds.pop_back();
    }
    fun(ind+1,nums,ds,target);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>ds;
        fun(0,nums,ds,target);
        return arr;
    }
};
