class Solution {
public:
    int minLength(string s) {
        vector<char> stack(s.length());
        int top=-1;
        for(int i=0;i<s.length();i++){
            if(top==-1){
                top++;
                stack[top]=s[i];
            }
            else if ((stack[top] == 'A' && s[i] == 'B') ||(stack[top] == 'C' && s[i] == 'D')){
                top--;
            }
            else{
                top++;
                stack[top]=s[i];
            }
        }
        return top+1;

    }
};