class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        int maxi=arr[0];
        int maxSum=0;
        int mini=arr[0];
        int miniSum=0;
        int totalSum=0;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            maxSum+=arr[i];
            miniSum+=arr[i];
            totalSum+=arr[i];
            if(maxSum<0) maxSum=0;
            if(miniSum>0) miniSum=0;
            
            maxi=max(maxi,maxSum);
            mini=min(mini,miniSum);
            
        }
        
        return max(maxi,totalSum-mini);
        
        
        // your code here
    }
};