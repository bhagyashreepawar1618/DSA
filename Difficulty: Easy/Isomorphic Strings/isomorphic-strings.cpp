class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        if(s1.size() != s2.size()) {
            return false;
        }

        map<char, char> mpp;
        map<char, char> reverse;

        for(int i = 0; i < s1.size(); i++) {

            // s1[i] already mapped
            if(mpp.find(s1[i]) != mpp.end()) {
                if(mpp[s1[i]] != s2[i]) {
                    return false;
                }
            }
            else {
                // s2[i] already mapped to some other character
                if(reverse.find(s2[i]) != reverse.end()) {
                    return false;
                }

                mpp[s1[i]] = s2[i];
                reverse[s2[i]] = s1[i];
            }
        }

        return true;
    }
};