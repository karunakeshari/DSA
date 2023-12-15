class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> fre;
        for(auto it:nums){
            fre[it]++;
        }
        //using lambda function
        sort(nums.begin(),nums.end(),[&](int a,int b)->bool {
           return (fre[a]!=fre[b]?fre[a]<fre[b]:a>b); 
        });
        return nums;
    }
};
//Time Complexity-O(NlogN)
//Space Complexity-O(N)