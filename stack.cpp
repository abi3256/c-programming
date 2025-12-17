#include<iostream>
using namespace std;
#define SIZE 100
class Stack{
    private:
    int stack[SIZE];
    int top;
    public:
    Stack(){
        top=-1;
    }
    void push(int val){
        if(top>=SIZE-1){
            cout<<"stack is overflow";
        }
        stack[++top]=val;
    }
    void pop(int val){
        if(top<0){
            cout<<"stack is underflow";
        }
        top--;
    }
    int peek(){
        if(top<0){
            cout<<"stack underflow";
        }
        return stack[top];
    }
    void display(){
        if(top<0){
            cout<<"stack underflow";
        }
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" "; 
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        s.push(val);
    }
    s.display();
    cout<<s.pop()<<endl;
    s.display():
    coiut<<s.peek():
    return 0;
}
