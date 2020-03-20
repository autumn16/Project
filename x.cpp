#include <iostream>

using namespace std;

template<class T, class X>
class R{
private:
    int a,b;
public:
    X sum(T a, X b){
        return a+b;
    }
    X sub(T a, X b){
        return a-b;
    }
};

int main(){
    R<int,float> myR;
    cout << myR.sub(2,4.5) << endl;
    cout << myR.sum(2,3.2) << endl;
    return 0;
}