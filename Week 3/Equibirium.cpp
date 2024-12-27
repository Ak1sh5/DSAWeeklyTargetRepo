 class Solution {
  public:
    // Function to find equilibrium point in the array.
    int equilibriumPoint(vector<int> &arr) {
        int totalSum=0;
        int n=arr.size();
        int leftSum=0;
        
        for(int i=0;i<n;i++) totalSum+=arr[i];
        
        for(int i=0;i<n;i++){
            totalSum-=arr[i];
            if(leftSum==totalSum) return i+1;
             leftSum+=arr[i];
        }
        
        return -1;
        // code here
    }
};