//link-> https://leetcode.com/problems/valid-anagram/description/
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>count(26,0);

        for(char &ch :s){
            count[ch-'a']++;
        }
        for(char &ch :t){
            count[ch-'a']--;
        }
        //check agr sare elem zero ha ke nhi
        //for loop bhi lga skte hai

        bool allZeros = all_of(begin(count),end(count),[](int element){
            return element ==0;
        });
         return allZeros;
    }
};
