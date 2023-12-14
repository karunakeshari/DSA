class Solution {
public:
    void rev(int i,vector<char>& s){
        if(i>=s.size()/2) return;
        char ch=s[i];
        s[i]=s[s.size()-1-i];
        s[s.size()-1-i]=ch;
        rev(i+1,s);
    }
    void reverseString(vector<char>& s) {
        rev(0,s);
    }
};
//Time Complexity-O(N)
//Space Complexity-O(N)