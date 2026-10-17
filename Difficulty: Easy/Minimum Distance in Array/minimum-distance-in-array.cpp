class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        int lastX = -1, lastY = -1;
        int ans = INT_MAX;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x) {
                lastX = i;
                if (lastY != -1) {
                    ans = min(ans, abs(lastX - lastY));
                }
            }

            if (arr[i] == y) {
                lastY = i;
                if (lastX != -1) {
                    ans = min(ans, abs(lastX - lastY));
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
