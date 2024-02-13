class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0,minimum_on_left=prices[0];
        for(int i=1;i<prices.size();i++){
            int cost=prices[i]-minimum_on_left;
            maxProfit=max(maxProfit,cost);
            minimum_on_left=min(minimum_on_left,prices[i]);
        }
        return maxProfit;
    }
};
//Time Complexity-O(N)
//Space Complexity-O(1)