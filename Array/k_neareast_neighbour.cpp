// QUES LINK--> https://leetcode.com/problems/find-k-closest-elements/submissions/1300565390/
//QUES--> Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.
// An integer a is closer to x than an integer b if:
// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0 , h = arr.size()-1;
        while(h -l >= k){
            if(x-arr[l] > arr[h]-x){
                l++;
            }else{
                h--;
            }
        }
        return vector<int>(arr.begin()+l,arr.begin()+h+1);
    }
};
