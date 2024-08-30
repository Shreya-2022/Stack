
#include<iostream>
#include<stack>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(' || ch == '[' || ch == '{') {
                // open bracket
                st.push(ch);
            } else {
                // close bracket
                if (st.empty()) return false;  // Stack should not be empty when trying to match a closing bracket
                if (ch == ')' && st.top() == '(') {
                    st.pop();
                } else if (ch == '}' && st.top() == '{') {
                    st.pop();
                } else if (ch == ']' && st.top() == '[') {
                    st.pop();
                } else {
                    // no match
                    return false;
                }
            }
        }
        if(st.size() ==0){
            return true;
        }
        else{
            return false;
        }  // Check if any unmatched brackets remain
    }
};

