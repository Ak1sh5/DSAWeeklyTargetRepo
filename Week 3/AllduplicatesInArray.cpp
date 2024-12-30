/*-Get the index corresponding to the number
- If the number at index is negative, it means it's seen before ,so add to ans
-Else Mark the number as seen by negating it
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        if(n==1) return ans;
        for(int i=0;i<n;i++){
            int index=abs(nums[i])-1;


            if(nums[index]<0){
                ans.push_back(abs(nums[i]));
            }
            else nums[index]=-nums[index];
        }
        return ans;
    }
};
//TC:O(n) sc:O(1)
