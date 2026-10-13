class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        
        int maxProduct=0;
        for(int i=0;i<arr.size();i++){
            maxProduct+=arr[i]*i;
        }
        
        return maxProduct;
    }
};