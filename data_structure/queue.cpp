// 2020 3 28
// Queue implementation using array, C++ programming language

#include <iostream>

using namespace std;

class Queue{
private:
    int arr[1000];
    int _size = 0;
public:
    bool isEmpty(){
        if(_size==0) return true;
        else return false;
    }
    void push(int value){
        if(_size==0){
            arr[0] = value;
            cout << value << " is now head\n";
            _size++;
        } else {
            arr[_size] = value;
            cout << value << " successfully pushed into queue\n";
            _size++;
        }
    }
    void pop(){
        cout << arr[0] << " successfully deleted from queue\n";
        for(int i=0; i<_size; i++){
            arr[i]=arr[i+1];
        }
        _size--;
    }
    void size(){
        cout << "Size of the queue is " << _size << endl;
    }
    void print(){
        for(int i=0; i<_size; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main(){
    Queue myQ;
    myQ.push(4);
    myQ.push(5);
    myQ.push(6);
    myQ.pop();
    myQ.print();
    return 0;
}