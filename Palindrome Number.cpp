class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x!=0 && x%10==0)) return false;
        //To avoid overflow, we will check just half of the number
        int num=x;
        int rev=0;
        while(num>rev){
            rev=(rev*10)+(num%10);
            num/=10;
        }
        return (num==rev) || (num==rev/10);
    }
};
//Time Complexity-O(log(N/2)) base 10
//Space Complexity-O(1)