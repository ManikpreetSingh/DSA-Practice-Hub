//Link-> https://www.geeksforgeeks.org/problems/aggressive-cows/0
sol-> class Solution {
public:
    bool ispossible(vector<int>stalls , int k , int mid){
        int cnt = 1;
        int pos = stalls[0];
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-pos >= mid){
                cnt++;
                pos = stalls[i];
            }
            if(cnt == k)return true;
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
    sort(stalls.begin(),stalls.end());
    int s = 0 , ans = -1;
    int e = stalls[stalls.size()-1]- stalls[0];
    
    while(s<=e){
        int mid = s + (e - s)/2;
        if(ispossible(stalls,k,mid)){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid -1;
        }
      
    }
    return ans;
    }
