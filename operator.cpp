// Test operator
#include <iostream>

using namespace std;

class test{
private:
public:
    int data = 10;
    // this is config for operator ++
    test operator+(test toadd){
        test rel;
        rel.data = data + toadd.data; // add two data of seperate object
        return rel;
    }
    // this is config for operator ==
    bool operator==(test tocompare){
        if(data==tocompare.data) return true;
        else return false;
    }
};

int main(){
    test t1,t2;
    t1.data = 2; 
    t2.data = 3;
    test t3;
    t3 = t1 + t2;
    cout << t3.data << endl;
    if(t1==t2) cout << "they're the same\n";
    else cout << "they're different\n";
    return 0;
}