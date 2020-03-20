// 2020 3 20
// Quicksort implementation using C++
#include <iostream>

using namespace std;

void print(int lib[], int n){
    for(int i=0; i<n; i++) cout << lib[i] << " ";
}

int partition(int lib[], int first, int last){
    int pivot = lib[last];
    int left = first;
    int right = last-1;
    while(true){
        while(left<=right and lib[left]<pivot) left++;
        while(right>=left and lib[right]>pivot) right--;
        // check the position of left and right pointers
        if(left>=right) break;
        swap(lib[left],lib[right]);
        left++;
        right--;
    }
    swap(lib[left],lib[last]); // swap pivot
    return left;
}

void quicksort(int lib[], int first, int last){
    if(first<last){
        int pos = partition(lib,first,last);
        quicksort(lib,first,pos-1);
        quicksort(lib,pos+1,last);
    }
}
int main(){
    int lib[] = {9,25,40,36,1,8};
    int n = sizeof(lib)/sizeof(lib[0]);
    quicksort(lib,0,n-1);
    print(lib,n);
    return 0;
}