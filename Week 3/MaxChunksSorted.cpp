class Solution {
public:
    int maxChunksToSorted(vector<int>& nums) {
        int ans=0;
        int maxi=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
           maxi=max(maxi,nums[i]);
           if(maxi==i) ans++;
        }
        return ans;
    }
};