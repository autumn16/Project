// 2020 3 20
// Sequential search implementation using C++

#include <iostream>

using namespace std;

bool seqsearch(int arr[], int size, int num){
    for(int i=0; i<size; i++){
        if(arr[i]==num) return true;
    } return false;
}

int main(){
    int arr[] = {4,5,12,9,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num = 13;
    if(seqsearch(arr,size,num)==true) cout << "num found\n";
    else cout << "num not found\n";
    return 0;
}