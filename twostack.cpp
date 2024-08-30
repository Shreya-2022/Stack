#include<iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int size;
    int top1;
    int top2;

    // Constructor
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    // Push in the first stack
    void push1(int data) {
        if (top2 - top1 == 1) {
            // No space available
            cout << "OVERFLOW" << endl;
        } else {
            top1++;
            arr[top1] = data;
        }
    }

    // Push in the second stack
    void push2(int data) {
        if (top2 - top1 == 1) {
            cout << "OVERFLOW" << endl;
        } else {
            top2--;
            arr[top2] = data;
        }
    }

    // Pop from the first stack
    void pop1() {
        if (top1 == -1) {
            // Stack is empty
            cout << "UNDERFLOW" << endl;
        } else {
            arr[top1] = 0;
            top1--;
        }
    }

    // Pop from the second stack
    void pop2() {
        if (top2 == size) {
            cout << "UNDERFLOW" << endl;
        } else {
            arr[top2] = 0;
            top2++;
        }
    }

    // Print the stack status
    void print() {
        cout << endl;
        cout << "top1: " << top1 << endl;
        cout << "top2: " << top2 << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack st(6);  // Fixed the class name from 'stack' to 'Stack'
    st.print();

    st.push1(10);
    st.print();

    return 0;
}
