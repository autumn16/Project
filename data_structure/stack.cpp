// 2020 3 28
// Stack implementation using array, C++ programming language

#include <iostream>

using namespace std;

class stack{
private:
    int arr[100];
    int _size = 0;
public:
    bool isEmpty(){
        if(_size==0) return true;
        else return false;
    }
    void push_back(int value){
        if(_size==0){
            arr[0]=value;
            _size++;
            cout << value << " is the first element\n";
        }
        else { 
            arr[_size]=value;
            _size++;
            cout << value << " pushed successfully into stack\n";
        }
    }
    void pop(int value){
        bool isExist = false;
        for(int i=0; i<_size; i++){
            if(arr[i]==value){
                for(int j=i; j<_size; j++){
                    arr[j]=arr[j+1];
                }
                isExist = true;
                cout << value << " sucessfully deleted from stack\n";
                break;
            }
            if(i==_size-1) cout << "Value doesn't exist\n";
        }
        if(isExist==true) _size--; 
    }
    void peak(){
        if(_size==0) cout << "Stack is empty\n";
        else { 
            cout << arr[0] << " is peak value\n";
        }
    }
    void size(){
        cout << "Size of the stack is " << _size << endl;
    }
    void print(){
        for(int i=0; i<_size; i++) cout << arr[i] << " ";
        cout << "\n";
    }
};

int main(){
    stack myStack;
    myStack.push_back(4);
    myStack.push_back(5);
    myStack.push_back(6);
    myStack.pop(5);
    myStack.push_back(7);
    myStack.push_back(8);
    myStack.pop(7);
    myStack.pop(4);
    myStack.peak(); 
    myStack.print();
    return 0;
}