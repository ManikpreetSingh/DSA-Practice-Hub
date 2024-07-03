//Link -> https://leetcode.com/problems/palindromic-substrings/description/
class Solution {
public:
    int checkaroundidx(string s , int i,int j){
        int count = 0 ; 
        while(i >= 0 && j <= s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int cnt = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
            int oddsol = checkaroundidx(s,i,i);
            cnt = cnt + oddsol;
            int evensol =  checkaroundidx(s,i,i+1);
            cnt = cnt + evensol;
        }
        return cnt;
    }
};
