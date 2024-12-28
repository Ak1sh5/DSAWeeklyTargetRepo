class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>mpp(256,0);
        vector<bool>tmpp(256,true);

        int n=s.length();

        for(int i=0;i<n;i++){
           
            if(tmpp[t[i]] && mpp[s[i]]==0){
               mpp[s[i]]=t[i];
               tmpp[t[i]]=false;
                
            }
            else if(mpp[s[i]]!=t[i]) return false;
        }
        return true;
    }
};