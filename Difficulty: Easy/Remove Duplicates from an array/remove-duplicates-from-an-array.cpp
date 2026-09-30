class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        // code here
        set<int> st;
        vector<int> temp;
        for(int i=0;i<arr.size();i++){
            if(st.find(arr[i])==st.end()){
                st.insert(arr[i]);
                temp.push_back(arr[i]);
            }
        }
        
        return temp;
    }
};