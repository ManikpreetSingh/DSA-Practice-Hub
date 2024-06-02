//QUESTION LINK --> https://leetcode.com/problems/maximum-subarray/description/

// Given an integer array nums, find the  subarray with the largest sum, and return its sum.

//CODE ->
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(),  maxi = INT_MIN ,  sum =0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum > maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;

    }
};
