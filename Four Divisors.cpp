class Solution {
public:
    set<int> div(int n){
        set<int> ans;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                ans.insert(i);
                ans.insert(n/i);
            }
            if(ans.size()>4){
                break;
            }
        }
        return ans;
    }
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            set<int> temp=div(nums[i]);
            if(temp.size()==4){
                for(auto it:temp){
                    sum+=it;
                }
            }
        }
        return sum;
    }
};
//Time Complexity-O(N^(3/2))
//Space Complexity-O(1)