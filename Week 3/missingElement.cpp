class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size()+1;
        long long xora=0;
        long long xorb=0;
        
        for(int i=0;i<arr.size();i++){
            xora^=arr[i];
            xorb^=(i+1);
        }
        xorb^=n;
        
        return (xora^xorb);
        // code here
    }
};