// 2020 3 20
// Insertion sort implementation using C++

#include <iostream>

using namespace std;

void print(int lib[], int n){
    for(int i=0; i<n; i++) cout << lib[i] << " ";
}

void inssort(int lib[], int n){
    int j=0;
    for(int i=0; i<n; i++){
        j = i+1;
        while(lib[j]<lib[i]){
            swap(lib[j],lib[i]);
            --j;
            --i;
            if(i<0) break;
        }
    }
}

int main(){
    int lib[] = {9,25,40,36,1,8};
    int n = sizeof(lib)/sizeof(lib[0]);
    inssort(lib,n);
    print(lib,n);
    return 0;
}