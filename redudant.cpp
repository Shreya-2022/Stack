#include <iostream>
#include <stack>

using namespace std;

bool checkRedundant(string &str) {
    stack<char> st;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (ch == ')') {
                int operatorCount = 0;
                while (!st.empty() && st.top() != '(') {
                    char temp = st.top(); // Added this line to define `temp`
                    if (temp == '+' || temp == '-' || temp == '*' || temp == '/') {
                        operatorCount++;
                    }
                    st.pop();
                }
                st.pop(); // Pop the opening bracket '('

                if (operatorCount == 0) {
                    return true; // Redundant brackets found
                }
            }
        }
    }
    return false; // No redundant brackets found
}

int main() {
    string expression = "((a+b))"; // Example string
    if (checkRedundant(expression)) {
        cout << "The expression has redundant brackets." << endl;
    } else {
        cout << "The expression does not have redundant brackets." << endl;
    }
    return 0;
}
