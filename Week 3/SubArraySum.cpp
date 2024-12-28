class Solution {
public:
    long long subarraySum(vector<int>& arr) {
        const long long MOD = 1000000007;
        long long ans = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            long long contribution = (long long)arr[i] * (i + 1) * (n - i);
            contribution %= MOD;
            ans = (ans + contribution) % MOD;
        }

        return ans;
    }
};
