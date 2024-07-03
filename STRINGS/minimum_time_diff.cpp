// LINK -> https://leetcode.com/problems/minimum-time-difference/description/
class Solution {
public:
    int findMinDifference(vector<string>& t) {
        vector<int>time;
        for(int i = 0 ; i<t.size();i++){
            string curr =  t[i];

            int hours = stoi(curr.substr(0,2));
            int min = stoi(curr.substr(3,2));
            int total = hours * 60 + min;
            time.push_back(total);
        }

        sort(time.begin(),time.end());
        int mini = INT_MAX;
        int n = time.size();

        for(int i = 0 ;i< n-1;i++){
            int diff = time[i+1]-time[i];
            mini = min(mini,diff);
        }

        int last_diff = (time[0]+1440)-time[n-1];
        mini = min(mini,last_diff);

        return mini;
    }
};
