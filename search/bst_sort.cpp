// 2020 3 20
// Binary search tree implementation using C++
// fuck that, i'm dying for those hard-to-implement data structure -_-
#pragma GCC diagnostic ignored "-Wreturn-type"

#include <iostream> // idk i have typed this lines many times ..

using namespace std;

struct node{
    node*left;
    node* right;
    int data;
    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

class bst{
private:
    node* root=NULL;
    int rsize;
    bool isEmpty(){
        if(rsize==0) return true;
        else return false;
    }
    bool insert(node* &ptr, int value){
        // insert head
        if(root==NULL){
            root = new node(value);
            cout << root->data << " is now root node\n";
            rsize++;
            return true;
        } 
        if(root!=NULL){
            if(value<root->data) return insert(root->left, value);
            if(value>=root->data) return insert(root->right,value);
        }
    }
public:
    bool insert(int value){
         return insert(root,value);
    }
};


int main(){
    bst mtree;
    mtree.insert(16);
    mtree.insert(9);
    return 0;
}