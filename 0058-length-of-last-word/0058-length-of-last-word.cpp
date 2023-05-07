class Solution {
    public:
        int lengthOfLastWord(string s) {
        stack<char>st;
        int c = 0;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        
        while(st.top()==' ')st.pop();
        while(!st.empty()&&st.top()!=' '){
            c++;
            st.pop();
        }
        return c;
    }
};