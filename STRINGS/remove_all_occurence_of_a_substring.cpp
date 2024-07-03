//Link -> https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos = s.find(part);
        while(pos != string::npos){
            s.erase(pos,part.length());
            pos = s.find(part);
        }
        return s;
    }
};
