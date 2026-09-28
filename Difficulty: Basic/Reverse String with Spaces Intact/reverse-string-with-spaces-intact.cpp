class Solution {
  public:
    string reverses(string &s) {
        // code here
        int low=0;
        int high=s.size()-1;
        
        while(low<high){
            if(s[low]==' '){
                low++;
            }
            else if(s[high]==' '){
                high--;
            }
            
            else{
                char prev=s[low];
            s[low]=s[high];
            s[high]=prev;
            low++;
            high--;
            }
            
        }
        
        return s;
    }
};