class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        // code here
        int freq = arr.size()/k;
        map<int,int> mpp;
        
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        
        int count=0;
        for(auto it:mpp){
            if(it.second > freq){
                count++;
            }
        }
        return count;
    }
};