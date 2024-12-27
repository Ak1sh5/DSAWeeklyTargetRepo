class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();

        int i=0;
        int ans=0;
        int counter=-1;
        unordered_map<char, int> mpp = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};
        for(int i=n-1;i>=0;i--){
            if(mpp[s[i]] >= counter){
                counter=mpp[s[i]];
                ans+=mpp[s[i]];
            }
            else{
                ans-mpp[s[i]];
            }
        }             
        return ans;
    }
};