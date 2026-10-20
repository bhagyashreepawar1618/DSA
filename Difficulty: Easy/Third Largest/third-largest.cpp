class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // code here
        int largest=arr[0];
        int slargest=-1;
        int tlargest=-1;
        for(int i=1;i<arr.size();i++){
            if(largest<arr[i]){
                tlargest=slargest;
                slargest=largest;
                largest=arr[i];
            }
            else if(arr[i]>slargest){
                tlargest=slargest;
                slargest=arr[i];
            }
            else if(arr[i]>tlargest){
                tlargest=arr[i];
            }
        }
        
        return tlargest;
    }
};