class Solution {
  public:
    int findDiff(vector<int>& arr) {

        int maxElement = *max_element(arr.begin(), arr.end());

        vector<int> temp(maxElement + 1, 0);

        for(int i = 0; i < arr.size(); i++) {
            temp[arr[i]]++;
        }

        int maxnum = INT_MIN;
        int minnum = INT_MAX;

        for(int i = 0; i < temp.size(); i++) {
            if(temp[i] > 0) {
                maxnum = max(maxnum, temp[i]);
                minnum = min(minnum, temp[i]);
            }
        }

        return maxnum - minnum;
    }
};