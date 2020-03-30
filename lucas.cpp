#include <iostream>

using namespace std;
#define MAX 101
int n,m,y,x;
int arr[MAX][MAX];
int count = 0;

void solve(){

}

int main(){
    cin >> n >> m >> y >> x;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}