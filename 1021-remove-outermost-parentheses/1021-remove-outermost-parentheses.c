char* removeOuterParentheses(char* s) {
    if (s == NULL) {
        return s;
    }
    char *ans = malloc(strlen(s) + 1);
    int balance = 0;
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            if (balance > 0) {
                ans[j++] = '(';
            }
            balance++;
        }
        else {
            balance--;
            if (balance > 0) {
                ans[j++] = ')';
            }
        }
    }
    ans[j] = '\0';
    return ans;
}