class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        map<int,int> mpp;
        
        vector<int> temp;
        for(int i=0;i<arr.size();i++){
            if(mpp[arr[i]]>=1){
                temp.push_back(arr[i]);
            }
            else{
                mpp[arr[i]]++;
            }
        }
        
        return temp;
    }
};