#include <iostream>
#include <map>

using namespace std;

bool inLib(int arr[], int n, int check){
    for(int i=0; i<n; i++){
        if(check==arr[i]) return true;
    } return false;
}

int main(){
    long long n;
    cin >> n;
    int arr[n];
    map<int,int> myMap;
    int count=0;
    int first=0;
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++){
        if(inLib(arr,i,arr[i])==false){
            myMap[count] = arr[i];
            count++;
        }
    }
    for(int i=0; i<count; i++){
        cout << myMap[i] << " ";
    }
}