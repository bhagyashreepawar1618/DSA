class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {

        int low = 0;
        int high = 0;
        int sum = 0;
        int ans = INT_MAX;

        while (high < arr.size()) {

            // Expand window
            sum += arr[high];

            // Shrink window while sum > x
            while (sum > x) {

                ans = min(ans, high - low + 1);

                sum -= arr[low];
                low++;
            }

            high++;
        }

        return ans == INT_MAX ? 0 : ans;
    }
};