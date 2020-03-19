// 2020 2 19
// Bubble sort implementation using C++

#include <iostream>

using namespace std;

void bbsort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j+1]<arr[j]) swap(arr[j],arr[j+1]);
        }
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}
int main(){
    int indexers[] = {9,25,40,36,1,8};
    int n = sizeof(indexers)/sizeof(indexers[0]);
    bbsort(indexers,n);
    print(indexers,n);
    return 0;
}