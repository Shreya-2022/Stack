#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> nextSmallestElement(int *arr, int size) {
    stack<int> st;
    vector<int> ans(size); // Vector to store the answers
    st.push(-1);

    for(int i = size-1; i >= 0; i--) {
        int curr = arr[i];

        // Find the next smaller element
        while(st.top() >= curr && st.top() != -1) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }

    return ans;
}

int main() {
    int arr[5] = {8, 4, 6, 2, 3};
    int size = 5;
    vector<int> ans = nextSmallestElement(arr, size);

    // Print the answer
    for(int i = 0; i < size; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}








