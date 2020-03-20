// 2020 3 20
// Binary search implementation using C++
// NOTE: The array has to be sorted before using binary search 

#include <iostream>
#include <algorithm> 

using namespace std;

void to_sort(int arr[], int size){
    sort(arr,arr+size);
}

int binsearch(int arr[],int first, int last,int num){
    if(last>=first){
        int mid = (first + (last-1))/2;
        if(arr[mid]==num) return mid;
        if(arr[mid]>num) return binsearch(arr,first,mid-1,num);
        if(arr[mid]<num) return binsearch(arr,mid+1,last,num);
    }
    return -1;
}
int main(){
    int arr[] = {1,8,9,25,36,40};
    int size = sizeof(arr)/sizeof(arr[0]);
    //cout << size;
    int num = 25;
    //to_sort(arr,size);
    if(binsearch(arr,0,size-1,num)==-1) cout << "number not found\n";
    else cout << "number found\n";
    return 0;
} 
