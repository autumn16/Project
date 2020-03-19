// 2020 2 19
// Selection sort implement using C++

#include <iostream>

using namespace std;

void selectionSort(int lib[], int n){
    int min;
    for(int j=0; j<n; j++){
        min=lib[j];
        for(int i=j+1; i<n; i++){
            if(lib[i]<min){
                min = lib[i];
                swap(lib[i],lib[j]);
                //min = lib[i];
            }
        }
    }
}

void print(int lib[],int n){
    for(int i=0; i<n; i++) cout << lib[i] << " ";
}
int main(){
    int lib[] = {9,25,40,36,1,8};
    int n = sizeof(lib)/sizeof(lib[0]);
    selectionSort(lib,n);
    print(lib,n);
    return 0;
}