//LInk -> https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/1309735737/
class Solution {
public:
    bool is_vowels(char ch){
       ch = tolower(ch);
       return ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u';
    }
    string reverseVowels(string s) {
        int l = 0 , h = s.length()-1;
        while(l<=h){
            if(is_vowels(s[l]) && is_vowels(s[h])){
                swap(s[l],s[h]);
                l++;
                h--;
            }
            else if(is_vowels(s[l]) == 0){
                l++;
            }else{
                h--;
            }
        }
        return s;
    }
};
