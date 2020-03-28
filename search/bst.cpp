// 2020 3 20
// Binary search tree implementation using C++
// fuck that, i'm dying for those hard-to-implement data structure -_-

#include <iostream>

using namespace std;

struct node{
    node* left;
    node* right;
    int data;
    node(int value){
        left=NULL;
        right=NULL;
        data = value;
    }
};

class bst{
private:
    node* root = NULL;
    int rsize = 0;
    bool isEmpty(){
        if(rsize==0) return true;
        else return false;
    }
    bool insert(node* &root, int value){
        if(root==NULL){
           root = new node(value);
           cout << root->data << " pushed successfully into tree\n";
           ++rsize;
           return true;
        }
        if(root!=NULL) {
           if(value<root->data) return insert(root->left,value);
           if(value>root->data) return insert(root->right,value);
        }
        return true;
    }
    // node->left->right (preorder traversal)
    void preorder(node* &root){
        // if(root==NULL) cout << "There's nothing to print\n";
        if(root!=NULL){
            cout << root->data << " "; 
            preorder(root->left);
            preorder(root->right);
        }
    }
    // left->node->right 
    void inorder(node* &root){
        if(root!=NULL){
            preorder(root->left);
            cout << root->data << " ";
            inorder(root->right);
        }     
    }
    // left->right->node 
    void postorder(node* &root){
        if(root!=NULL){
            postorder(root->left);
            postorder(root->right);
            cout << root->data << " ";
        }
    }
public:
    bool insert(int value){
        return insert(root,value);
    }
    void preorder(){
        preorder(root);
        cout << endl;
    }
    void inorder(){
        inorder(root);
        cout << endl;
    }
    void postorder(){
        postorder(root);
        cout << endl;
    }
};

int main(){
    bst myTree;
    myTree.insert(4);
    myTree.insert(6);
    myTree.insert(3);
    //myTree.preorder();
    myTree.preorder();
    myTree.inorder();
    myTree.postorder();
    return 0;
}