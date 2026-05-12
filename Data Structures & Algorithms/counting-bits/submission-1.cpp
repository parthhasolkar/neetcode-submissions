class Solution {
public:
void decToBinaryRec(int n, string &bin) {
  	if (n==0) 
      	return;
  	decToBinaryRec(n/2, bin);
  	bin.push_back(n%2 + '0');
    }
string decToBinary(int n) {
  	if (n == 0) 
      	return "0";
  
    string bin = "";
  	decToBinaryRec(n, bin);
  	return bin;
}
    vector<int> countBits(int n) {
        vector<int>ans;
       string c ="";
        for(int i =0;i<=n;i++){
            int cnt=0;
          c = decToBinary(i); 
         for(char r : c){
            if(r == '1') cnt++;
         }
         ans.push_back(cnt);
        }
return ans;
    }
};
