class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> fre(26,0);
        for(int i=0;i<s.size();i++){
            fre[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            fre[t[i]-'a']--;
        }
        for(auto it:fre){
            if(it!=0) return false;
        }
        return true;
    }
};
//Time Complexity-O(N)
//Space Complexity-O(1)