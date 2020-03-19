#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> mVec;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            mVec.push_back(i*j);
            //cout << mVec.size() << endl;
        }
    }
    //cout << mVec.size() << endl;
    //for(int i=0; i<mVec.size(); i++) cout << mVec[i] << " ";
    sort(mVec.begin(), mVec.end());
    cout << mVec.at(k-1);
    return 0;
}