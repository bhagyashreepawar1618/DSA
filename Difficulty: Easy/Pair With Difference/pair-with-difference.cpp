class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        sort(arr.begin(), arr.end());

        int low = 0;
        int high = 1;
        int n = arr.size();

        while (low < n && high < n) {
            if (low == high) {
                high++;
                continue;
            }

            int diff = arr[high] - arr[low];

            if (diff == x) {
                return true;
            }
            else if (diff < x) {
                high++;
            }
            else {
                low++;
            }
        }

        return false;
    }
};