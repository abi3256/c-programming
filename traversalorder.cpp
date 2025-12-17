#include<iotream>
using namespace std;
clss Node{
    private:
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=right=nullptr;
    }
};
class BinaryTree{
    public:
    Node *root;
    BinaryTree(){
        root=nullptr;
    }
    Node *createNode(int val){
        Node *
    }
    void inOrder(Node *root){
        if(root!=nullptr){
            inOrder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }
    }
}
int main(){
    
}