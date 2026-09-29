class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        map<int,int> mpp;
        
        for(int i=0;i<a.size();i++){
            mpp[a[i]]++;
        }
        
        for(int i=0;i<b.size();i++){
            mpp[b[i]]++;
        }
        vector<int> temp;
        for(auto it:mpp){
            temp.push_back(it.first);
        }
        
        return temp;
    }
};