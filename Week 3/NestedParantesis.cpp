class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int n=s.length();
        int counter=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') counter++;
            else if(s[i]==')') counter--;

            maxi=max(maxi,counter);
        }
        return maxi;
    }
};