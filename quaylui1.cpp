#include <iostream>

using namespace std;
int n, x[10], t[10];

void print(int k){
    cout << "Gia tri k luc nay la : " << k << endl;
    for(int i=1; i<=k; i++) cout << x[i] << " ";
    cout << endl;
}
void backtracking(int i){
    for(int j=x[i-1]; j<=(n-t[i-1])/2; j++){
        x[i]=j;
        t[i]=t[i-1]+x[i];
        backtracking(i+1);
    }
    x[i]=n-t[i-1];
    print(i);
}

int main(){
    n=5;
    x[0]=1;
    t[0]=0;
    backtracking(1);    
    return 0;
}