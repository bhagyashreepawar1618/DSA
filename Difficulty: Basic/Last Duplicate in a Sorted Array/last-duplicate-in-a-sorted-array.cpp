class Solution {
  public:
    vector<int> dupLastIndex(vector<int>& arr) {
        // code here
        set<int> st;
        for(int i=arr.size()-1;i>=0;i--){
            if(st.find(arr[i])==st.end()){ //not found in set
                st.insert(arr[i]);
            }
            //if element is found in set
            else{
                return {i+1,arr[i]};
            }
        }
        return {-1,-1};
    }
};