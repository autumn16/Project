#include <iostream>

using namespace std;
const int maxs = 20;
const int maxsC =20; // config +vo cung 
int c[100][100]; // ma tran chua chi phi 
int x[100]; // x de thu cac kha nang 
int bestway[100]; // bestway de ghi nhan nghiem
int t[100];// t de luu chi phi di tu x1 -> xi
bool Free[100]; // free de danh dau, free[i]==true neu chua di qua thanh pho i
int m,n;
int minspending; // chi phi toi thieu cho hanh trinh 


void enter(){
    n=4;
    m=6;
    c[1][2]=3;
    c[1][3]=2;
    c[1][4]=1;
    c[2][3]=1;
    c[2][4]=2;
    c[3][4]=4;
}


void first_init(){
    int i, j, k;
    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
           if(i==j) c[i][j]=0;
           else c[i][j]=maxs;
        }
    }
    /*
    for(int k=1; i<m; i++){
        c[j][i]=c[i][j]; 
    }*/
}

void final_init(){
    for(int i=1; i<n; i++){
        Free[i]=true;
    }
    Free[1]=false;
    x[1]=1;
    t[1]=0;
    minspending=maxsC;
}

void rTry(int i){
    for(int j=2; j<n; j++){
        if(Free[j]==true){
            x[i]=j;
            t[i]=t[i-1]+c[x[i-1]][j];
            if(t[i]<minspending){
                if(i<n){
                    Free[j]=false;
                    rTry(i+1);
                    Free[j]=true;
                }
            } else {
                if(t[n]+c[x[n]][1]<minspending){
                    bestway[i]=x[i];
                    minspending=t[n]+c[x[n]][1];
                }
            }
        }
    }
}

void printresult(){
    if(minspending=maxsC) cout << "NO SOLUTION";
    else for(int i=1; i<n; i++){
        cout << bestway[i] << " -> ";
    }
    cout << "\n";
    cout << minspending << endl;
}

int main(){
    enter();
    first_init();
    final_init();
    rTry(2);
    printresult();
}