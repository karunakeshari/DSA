class Solution {
public:
    int findGCD(vector<int>& nums) {
        int a=INT_MIN,b=INT_MAX;
        for(auto it:nums){
            a=max(a,it);
            b=min(b,it);
        }
        while(a>0 && b>0){
            if(a>b) a=a%b;
            else b=b%a;
        }
        if(a==0) return b;
        return a;
    }
};
//Time Complexity-O(N+log(min(a,b)))
//Space Complexity-O(1)