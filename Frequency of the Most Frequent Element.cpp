class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        //Sorting and Sliding Window
        sort(nums.begin(),nums.end());
        int ans=0;
        //Two pointers for window
        int l=0,r=0;
        long total=0;
        while(r<nums.size()){
            total+=nums[r];
            while((long)nums[r]*(r-l+1)>total+k){
                total-=nums[l];
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};