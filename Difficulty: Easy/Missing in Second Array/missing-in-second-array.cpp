class Solution {
  public:
    vector<int> findMissing(vector<int>& a, vector<int>& b) {
        // code here
        set<int> st;
        
        for(int i=0;i<b.size();i++){
            st.insert(b[i]);
        }
        
        vector<int> temp;
        for(int i=0;i<a.size();i++){
            if(st.find(a[i]) == st.end()){
                temp.push_back(a[i]);
            }
        }
        
        return temp;
    }
};
