#include<iostream>
using namespace std;

class node{
    public:
    node* prev;
    int data;
    node* next;
    node(int val) {
        prev=nullptr;
        data=val;
        next=nullptr;
    }
};
class DoubleLinkedlist{
    private:
    node* head;
    public:
    DoubleLinkedlist(){
        head=nullptr;
    }

    void insertAtEnd(int val){
        node* newnode=new node(val);
        if(head==nullptr){
        head=newnode;
    }
    else{
        node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
}
void displayforward(){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
~DoubleLinkedlist(){
    node* temp=head;
    while(temp!=nullptr){
        temp=head;
        head=temp->next;
        delete temp;
    }
}}; 
int main(){
    
    DoubleLinkedlist dll;
    int val,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        dll.insertAtEnd(val);
    }
    dll.displayforward();
    return 0;
}