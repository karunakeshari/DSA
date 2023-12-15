class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> fre;
        for(int i=0;i<nums.size();i++){
            //O(1) time in best and average case
            fre[nums[i]]++;
        }
        multimap<int,int> order;
        for(auto it:fre){
            //O(logN)
            order.insert({it.second,it.first});
        }
        vector<int> ans;
        for(auto it=order.rbegin();it!=order.rend();it++){
            if(k==0) break;
            ans.push_back(it->second);
            k--;
        }
        return ans;
    }
};
//Time Complexity-O(NlogN)
//Space Complexity-O(N)