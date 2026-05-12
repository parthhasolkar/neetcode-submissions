class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> vt(n, 1);
        for(int i = 1; i < n; i++){
            vt[i] = vt[i-1] * nums[i-1];
        }
        int suffix = 1;
        for(int i = n-1; i >= 0; i--){
            vt[i] *= suffix;
            suffix *= nums[i];
        }

        return vt;
    }
};