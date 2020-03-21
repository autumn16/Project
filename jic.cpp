//#pragma GCC diagnostic ignored "-Wreturn-type"

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

class binaryTree{
private:
    node* root = NULL;

    bool insert(node* &root, int value){
        if(root==NULL){
            root = new node(value);
            return true;
        }
        if(root!=NULL){
            if(value<root->data) return insert(root->left,value);
            if(value>=root->data) return insert(root->right,value);
        }
    }

    // this is pre-order traversal ( node - left - right )
    void print(node* root){
        //if(root==NULL) cout << "There're nothing to print\n";
        if(root!=NULL){
            cout << root->data << " ";
            print(root->left);
            print(root->right);
        }
    }

    // remove the element has the same value
    node* remove(node* root, int value){      
        if(root==NULL) return root;
        else if(value<root->data) root->left = remove(root->left,value);
        else if(value>root->data) root->right = remove(root->left,value);
        else {
        //if(root->data==value){
            // node is leaf;
            if(root->left==NULL && root->right->left==NULL){
                delete root;
                root = NULL;
            }
        }
        //}
    }
public:
    bool insert(int value){
        return insert(root,value);
    }
    void print(){
        print(root);
    }
    node* remove(int value){
        remove(root,value);
    }
};

int main(){
    binaryTree x;
    x.insert(11);
    x.insert(9);
    x.insert(17);
    //x.remove(9);
    x.print();
    return 0;
}