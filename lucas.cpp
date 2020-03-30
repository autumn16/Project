#include <iostream>
#define fu(i,a,b) for(int i=a; i<b; i++)
#define fd(i,a,b) for(int i=a; i<b; i--)
#define MAX 101

using namespace std;
int arr[MAX][MAX];
int n,m,y,x;
int lcount = 0;
int rcount = 0;
int count = 0;

void init(){
  for(int i=0; i<MAX; i++){
    for(int j=0; j<MAX; j++){
      arr[i][j]=1;
    }
  }
}

void solve(){

}

int main(){
  cin >> n >> m >> y >> x;
  init();
  fu(i,0,n){
    fu(j,0,m){
      cin >> arr[i][j];
    }
  }
  y=y-1;
  x=x-1;
  fu(i,0,n){
    fu(j,0,m){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}