#include <iostream>

using namespace std;

int main(){
    int lib[10] = {45,2,17,5,2,34,10,6,1,88};
    int n = sizeof(lib)/sizeof(lib[0]);
    for(int j=0; j<n; j++){
        for(int i=0; i<n-j; i++){
            if(lib[i+1]<lib[i]) swap(lib[i],lib[i+1]);
        }
    }
    for(int i=0; i<n; i++) cout << lib[i] << " ";
    return 0;
}