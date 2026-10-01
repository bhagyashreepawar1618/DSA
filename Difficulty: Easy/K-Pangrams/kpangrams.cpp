class Solution {
  public:
    bool kPangram(string s, int k) {
        // code here
        if(s.size()<26){
            return false;
        }
        
        map<char,int> mpp;
        
        for(int i=0;i<s.size();i++){
            if(s[i] !=' '){
                  mpp[s[i]]++;
            }
          
        }
        
        int sum=0;
        
        for(auto it:mpp){
            sum+=it.second;
        }
        
        if(sum>=26 && k>=(26-mpp.size())){
            return true;
        }
        
        return false;
        
    }
};