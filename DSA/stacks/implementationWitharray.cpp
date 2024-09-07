#include<iostream>
using namespace std;

class stack{
    int capacity;
    int top;
    int* arr;
public:
stack(int c){
    this->capacity =c;
    arr =new int [c];
    this->top= -1;
}

void push (int data){
    //check for the overflow
    if(this->top == this->capacity-1){
        cout<<"overflow condition"<<endl;
        return ;
    }
    this->top++;
    this->arr[this->top]=data;    
}
int pop(){
    //check for underflow condition 
    if(this->top == -1){
        cout<<"underflow condition"<<endl;
        return -1;
    }
    this->top--;

}
int gettop(){
    if(this->top ==-1){
        cout<<"stack is empty"<<endl;
        return -1;
    }
    return this->arr[this->top];
}
};
int main(){
    stack st(5);
    st.push(5);
    st.push(9);
    cout<<st.gettop()<<endl;
return 0;
}