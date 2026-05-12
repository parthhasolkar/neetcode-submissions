class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int orgSum=0;
        int realSum= (n * (n+1)) / 2;
        for(int i=0;i<n;i++){
            orgSum +=nums[i];
        }
        int x = realSum - orgSum;
        return x;
    }
};
