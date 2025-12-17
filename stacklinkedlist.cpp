#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *addr;

    Node(int val){
    data=val;
    addr=nullptr;
    }
};
class StackLinked{
private:
    Node *top;
public:
    StackLinked(){
        top=nullptr;
    }
    void push(int val){
    Node *newNode=new Node(val);
    newNode->addr=top;
    top=newNode;
    }
    void pop(){
        if(top==nullptr){
            cout<<"stack is empty";
        }
        Node *temp=top;
        cout<< top->data;
        top=top->addr;
        delete temp;
        cout<<endl;
    }
    int peek(){
        if(top==nullptr){
            cout<<"stack is empty";
        }
        return top->data;
    }
    void display(){
        Node *temp=top;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->addr;
        }
        cout<<endl;
    }   
    ~StackLinked(){
        while(top!=nullptr){
            Node *temp=top;
            top=top->addr;
            delete temp;
        }
    }
};
int main(){
    StackLinked s;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>val;
    s.push(val);
}
s.display();
s.pop();
s.display();
cout<<s.peek();
return 0;
}
