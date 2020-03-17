#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};

class binaryTree{
private:
    node* head;
    node* ptr;
    int rsize = 0;
public:
    bool isEmpty(){
        if(rsize==0) return true;
        else return false;
    }
    void pushBack(int value){
        if(isEmpty()==true){
            head = new node(value);
            rsize++;
            cout << head->data << " is head\n";
            ptr = head;
        } else {
            ptr->next = new node(value);
            ptr = ptr->next;
            ptr->next = NULL;
            cout << ptr->data << " pushed successfully into list\n";
            rsize++;
        }
    }
    void size(){
        cout << "Size of the list is " << rsize << endl;
    }
    void print(){
        node* pNew = head;
        cout << "List element is ";
        while(pNew->next!=NULL){
            cout << pNew->data << " ";
            pNew=pNew->next;
        }
        cout << pNew->data << endl;
    }
    void pushHead(int value){
        node* pNew = new node(value);
        pNew->next = head;
        head = pNew;
        rsize++;
    }
    void deleteLast(){
        node* ptr = head;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        //cout << "Last element data is " << ptr->data << endl;
        delete ptr->next;
        ptr->next = NULL;
    }
    void deleteHead(){
        node* ptr = head;
        head = ptr->next;
        delete ptr;
    }
    void reverse(){
        
    }
};


int main(){
    binaryTree myTree;
    myTree.pushBack(1);
    myTree.pushBack(2);
    myTree.pushBack(3);
    myTree.pushBack(4);
    myTree.pushHead(5);
    myTree.deleteLast();
    myTree.deleteHead();
    myTree.size();
    myTree.print();
    return 0;
}