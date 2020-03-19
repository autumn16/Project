#include <iostream>

using namespace std;

int main(){
    // data initialize
    int n, m, y, x;
    cin >> n >> m >> y >> x;
    int matrix[n][m];
    bool check[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matrix[i][j];
        }
    }
    // check initialize
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j]==0) check[i][j]=false;
            else check[i][j]=true;
        }
    }
    return 0;
}