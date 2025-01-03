class Solution {
public:
    void reverse(vector<int>& nums,int left, int right){
        while(left<=right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1) return ;
        k=k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
};