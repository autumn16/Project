#include <iostream>
#include <vector>

using namespace std;

int main(){
    /*
    int s;
    cin >> s;
    for(int i=0; i<s; i++){
        int m,n,k;
        cin >> m >> n >> k;
        int arr[m][n];
        int check[k][k];
        for(int r=0; r<m; r++){
            for(int d=0; d<n; d++){
                cin >> arr[r][d];
            }*/
        //}
        // check initialization
        /*
        for(int x=0; n<m; n++){
            for(int y=0; y<n; y++){
                check[x][y]=0;
            }
        }*/
        int m = 3;
        int n = 3;
        int k = 2;
        int arr[3][3];
        arr[0][0]=0; arr[0][1]=0; arr[0][2]=0;
        arr[1][0]=1; arr[1][1]=0; arr[1][2]=0;
        arr[2][0]=0; arr[2][1]=1; arr[2][2]=0;
        vector<int> myVec;
        for(int i=m-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                myVec.push_back(arr[i][j]);
            }
        }
        for(int i=0; i<myVec.size(); i++) cout << myVec[i] << " ";
        
    return 0;
}