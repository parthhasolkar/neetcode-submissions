class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++){
            mpp[nums[i]] = i;
        }
        vector<int> vt;

        for(int i = 0; i < n; i++){
            int req = target - nums[i];
            if(mpp.find(req) != mpp.end() && mpp[req] != i) {  
                vt.push_back(i);
                vt.push_back(mpp[req]);
                
                return vt; 
            }
        }

        return vt;
    }
};