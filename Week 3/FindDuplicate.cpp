//Better
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=1;
        int high=n-1;


        while(low<=high){
            int mid=(low+high)/2;
            int counter=0;
            for(int i=0;i<n;i++){
                if(nums[i]<=mid) counter++;
            }


            if(counter>mid) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};

//OPtimal
class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // Find the intersection point of the two pointers
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Find the entrance of the cycle
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};