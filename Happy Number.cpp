class Solution {
public:
    bool isHappy(int n) {
        //If by repeating the process, we visit the same number, it means we have fallen into endless lopp that is why it can't be happy number
        unordered_set<int> st;
        while(n!=1){
            int temp=0;
            while(n){
                int k=n%10;
                temp+=(k*k);
                n/=10;
            }
            if(temp==1) return true;
            else if(st.find(temp)!=st.end()) return false;
            else {
                st.insert(temp);
                n=temp;
            }
        }
        return true;
    }
};
