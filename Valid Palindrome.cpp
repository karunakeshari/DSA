class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]>=48 && s[i]<=57){
                str=str+(char)s[i];
            }
            if(s[i]>=65 && s[i]<=90){
                str+=(char)(s[i]+32);
            }
            if(s[i]>=97 && s[i]<=122){
                str+=(char)s[i];
            }
        }
        int i=0,j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
//Time Complexity-O(N)
//Space Complexity-O(1)