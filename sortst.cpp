// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
using namespace std;
void insertedSort(stack<int> &st,int element){
    if(st.empty() || element>st.top()){
        st.push(element);
        return;
    }
    int temp = st.top();
    st.pop();
    insertedSort(st,element);
    st.push(temp);
}
int main() {
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    insertedSort(st,25);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
        
    }

    return 0;
}