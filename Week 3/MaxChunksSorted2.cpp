class Solution {
public:
    int maxChunksToSorted(vector<int>& nums) {
        int ans=1;
        int n=nums.size();

        vector<int>suffix(n,0);
        vector<int>preffix(n,0);
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
           if(nums[i]<suffix[i+1]) suffix[i]=nums[i];
           else suffix[i]=suffix[i+1];
        }
        
        preffix[0]=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>preffix[i-1]) preffix[i]=nums[i];
            else preffix[i]=preffix[i-1];
        }
       
        for(int i=0;i<n-1;i++){
            if(preffix[i]<=suffix[i+1]) ans++;
        }
        return ans;
    }
};