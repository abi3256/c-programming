#include<iostream>
using namespace std;
#define SIZE 100
class Queue{
    private:
    int queue[SIZE];
    int front ,rear;
    public:
    Queue(){
        front=rear=-1;
    }
    void enqueue(int val){
        if(rear==SIZE-1){
            cout<<"Queue overflow";
        }
        if(front==-1){
            front=0;
        }
        queue[++rear]=val;
    }
    void dequeue(){
        if(front==-1 || front > rear){
            cout<<"Queue underflow";
        }
        front++;
    }
    int peek(){
        if(front==-1 || front>rear){
            cout<<"Queue underflow";
        }
            return queue[front];
    }
    void display(){
        if(front==-1 || front > rear){
            cout<<"Queue underflow";
        }
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        q.enqueue(val);
    }
    q.display();
    q.dequeue();
    q.display();
    cout<<q.peek();
    return 0;
}