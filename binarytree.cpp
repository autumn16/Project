#include <iostream>


using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

class binarytree{
private:
    node* root;
    int rsize = 0;

    // return where it is empty or not
    bool pisEmpty(node *n){
        if(rsize==0) return true;
        else return false;
    }

    // to add node
    void pInsert(node *n, int value){
        if(pisEmpty(root)==true){
            root = new node(value);
            cout << root->data << " is currently root";
            rsize++;
        } else {
            if(value<n->data){
                node* ptr = n;
                while(ptr!=NULL) ptr=ptr->left;
                ptr->left = new node(value);
                cout << ptr->data << " pushed successfully to the left of the tree\n";
                rsize++;
            } else if(value>=n->data){
                node* ptr = n;
                while(ptr!=NULL) ptr=ptr->right;
                ptr->right->right = new node(value);
                cout << ptr->data << " pushed successfully to the right of the tree\n";
                rsize++;
            }
        }
    }
public:
    bool isEmpty(){
        pisEmpty(root);
    }
    void insert(int value){
        pInsert(root,value);
    }
};

int main(){
    binarytree myTree;
    myTree.insert(1);
    myTree.insert(2);
    myTree.insert(3);
    return 0;
}