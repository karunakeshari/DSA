class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> fre;
        for(int i=0;i<nums.size();i++){
            fre[nums[i]]++;
        }
        for(auto it:fre){
            if(it.second > nums.size()/2) return it.first;
        }
        return 0;
    }
};
//Time Complexity-O(N)
//Space Complexity-O(N)