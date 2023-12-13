class Solution {
public:
    bool isThree(int n) {
        int totalDiv=0;
        for(int i=1;i<=n/2;i++){
            if(n%i==0) totalDiv++;
        }
        totalDiv++;
        return totalDiv==3;
    }
};
//Time Complexity-O(n/2)
//Space Complexity-O(1)