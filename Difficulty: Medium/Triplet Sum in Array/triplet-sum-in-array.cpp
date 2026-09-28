class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        unordered_map<int, int> freq;

        for(int x : arr) {
            freq[x]++;
        }

        for(int i = 0; i < arr.size(); i++) {
            for(int j = i + 1; j < arr.size(); j++) {

                int sum = arr[i] + arr[j];
                int needed = target - sum;

                int required = 1;

                if(needed == arr[i])
                    required++;

                if(needed == arr[j])
                    required++;

                if(freq[needed] >= required)
                    return true;
            }
        }

        return false;
    }
};