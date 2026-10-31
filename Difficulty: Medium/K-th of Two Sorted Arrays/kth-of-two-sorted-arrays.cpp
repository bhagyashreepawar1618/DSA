class Solution {
public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {

        int i = 0, j = 0;
        int count = 0;

        while(i < a.size() && j < b.size()) {

            int element;

            if(a[i] < b[j]) {
                element = a[i];
                i++;
            }
            else {
                element = b[j];
                j++;
            }

            count++;

            if(count == k)
                return element;
        }

        while(i < a.size()) {
            count++;
            if(count == k)
                return a[i];
            i++;
        }

        while(j < b.size()) {
            count++;
            if(count == k)
                return b[j];
            j++;
        }

        return -1;
    }
};