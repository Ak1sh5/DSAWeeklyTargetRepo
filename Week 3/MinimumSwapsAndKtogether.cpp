class Solution {
  public:
    int minSwap(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
        int j=0;
        int i=0;
        while(i<n && j<n ){
            if(nums[i]>k){
                j=max(j,i);
                while(j<n && nums[j]>k) j++;
                if(j>=n) break;
                swap(nums[j],nums[i]);
                ans++;
            }
            i++;
        }// code here
        return ans;
    }
};
