class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> temp;

        for (int x:arr) {
            if (x >= 0)
                temp.push_back(x);
        }

        for (int x: arr) {
            if (x <0)
                temp.push_back(x);
        }

        arr = temp;
    }
};