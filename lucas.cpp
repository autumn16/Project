#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> myVec;
    vector<int>::iterator ptr;
    myVec.push_back(1);
    myVec.push_back(2);
    myVec.push_back(3);
    ptr = myVec.begin();
    auto pTemp = myVec.begin();
    //myVec.erase(ptr);
    //myVec.erase(ptr);
    for(int i=0; i<myVec.size(); i++){
        cout << myVec[i] << " ";
    }
    cout << endl;
    return 0;
}