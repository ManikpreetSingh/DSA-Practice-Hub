// link -> https://www.geeksforgeeks.org/problems/trail-of-ones3242/1
// ques - > Given a number n, find the number of binary strings of length n that contain consecutive 1's in them. 
//Since the number can be very large, return the answer after modulo with 1e9+7.
class Solution {
  public:
    const int MOD = 1e9 + 7;
    int numberOfConsecutiveOnes(int n) {
        // code here if (n == 0) return 0;
    if (n == 1) return 0;

    vector<long long> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 2;

    for (int i = 2; i <= n; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }

    long long totalBinaryStrings = 1;
    for (int i = 0; i < n; ++i) {
        totalBinaryStrings = (totalBinaryStrings * 2) % MOD;
    }

    long long result = (totalBinaryStrings - dp[n] + MOD) % MOD;
    return result;
    }
};
