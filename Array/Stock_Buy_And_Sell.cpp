//QUES LINK -> https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
//QUES :->  You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 //CODE:->
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = INT_MAX;
        int maxi =0;
        for(int i=0;i<n;i++){
            mini = min(mini,prices[i]);
            maxi = max(maxi,prices[i]-mini);
        }
        return maxi;
        
    }
};
