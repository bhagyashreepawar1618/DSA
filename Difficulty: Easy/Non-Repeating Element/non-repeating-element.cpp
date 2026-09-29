class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // code here
        unordered_map<int,int> mpp;
        
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        
        for(int i=0;i<arr.size();i++){
            if(mpp[arr[i]]==1){
                return arr[i];
            }
        }
        
        return 0;
    }
};
