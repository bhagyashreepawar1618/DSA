class Solution {
  public:
    int product(vector<int> &arr) {
        long long product = 1;
        int mod = 1000000007;

        for (int i = 0; i < arr.size(); i++) {
            product = (product * arr[i]) % mod;
        }

        return product;
    }
};