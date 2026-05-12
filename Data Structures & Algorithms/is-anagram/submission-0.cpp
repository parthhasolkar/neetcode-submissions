class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        unordered_map<char,int>mpp1;
        for(char c : s){
            mpp1[c]++;
        }
        unordered_map<char, int > mpp2;
        for(char r : t){
            mpp2[r]++;
        }
            return mpp1==mpp2;
    }
};
