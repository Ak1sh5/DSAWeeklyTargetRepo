class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        if(n!=t.length()) return false;

        unordered_map<char,int>mpp;

        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }

        for(int i=0;i<n;i++){
            if(mpp[t[i]]==0) return false;
            mpp[t[i]]--;
        }
        return true;
    }
};