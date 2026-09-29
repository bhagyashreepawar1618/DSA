class Solution {
  public:
    int minIndexChar(string &s1, string &s2) {
        //  code here
        
        set<char> st;
        
        for(int i=0;i<s2.size();i++){
            st.insert(s2[i]);
        }
        
        for(int i=0;i<s1.size();i++){
            if(st.find(s1[i])!= st.end()){
                return i;
            }
        }
        return -1;
    }
};