#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;
   // constructor
    stack(int size ){
        // memory provide kr di int *arr ko
        arr = new int[size];
        this->size= size;
        this->top=-1;

    }

    void push(int data){
        if(top = size-1){
            cout<<"Stack overflow"<<endl;
            return ;
        }
        else{
            top++;
        arr[top]=data;
        }
        
    }
        void pop(){
            top--;

        }
        bool isempty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }
        int getTop(){
            if(top == -1){
                cout<<"Stack is empty"<<endl;
            }
            return arr[top];

        }
        int getSize(){
            return top+1;
        }
        void print(){
            cout<<"Top element: "<<getTop()<<endl;
            cout<<"Stack: "<<endl;
            for(int i = 0 ; i < getsize();i++){
                cout<<arr[i]<<" ";
            }
                cout<<endl;
            }
        };

int main() {
    Stack st(8);
    st.push(10);
    st.print();

    st.push(20);
    st.print();

    st.push(30);
    st.print();

    st.push(40);
    st.print();

    st.push(50);
    st.print();

    cout << "Top element: " << st.getTop() << endl;
    st.pop();
    cout << "Top element after pop: " << st.getTop() << endl;

    cout << "Stack size: " << st.getSize() << endl;
    return 0;
}