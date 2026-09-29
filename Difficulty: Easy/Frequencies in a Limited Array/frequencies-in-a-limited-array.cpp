class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int> temp(arr.size()+1,0);
        
        for(int i=0;i<arr.size();i++){
            temp[arr[i]]++;
        }
        
        vector<int> temp2;
        
        for(int i=1;i<temp.size();i++){
            temp2.push_back(temp[i]);
        }
        return temp2;
        
    }
};
