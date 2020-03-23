#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n,m;
    cin >> n >> m;
    vector<int> myVec;
    int manyBlock;
    int rmanyBlock[t];
    for(int i=0; i<t; i++) rmanyBlock[i] = 0;
    int maxblock[t];
    for(int i=0; i<t; i++){
        // one battle handle
        for(int j=0; j<m; j++){
            cin >> manyBlock;
            rmanyBlock[i]=rmanyBlock[i]+manyBlock;
            if(manyBlock==0) rmanyBlock[i]--;
            int checkBlock[manyBlock+1];
            for(int k=1; k<=manyBlock; k++){
                cin >> checkBlock[i];
                myVec.push_back(checkBlock[i]);
            }
            // data handle
        }
             /*
            for(int i=0; i<myVec.size(); i++){
                cout << myVec[i];
            } cout << endl; */
            int count=0;
            sort(myVec.begin(),myVec.end());
            for(int l=0; l<myVec.size(); l++){
                if(myVec[l]==myVec[l+1]) count++;
            }
            //cout << count << endl;
            //cout << count << endl;
            //cout << rmanyBlock[i];
            maxblock[i] = rmanyBlock[i]-count;
            //cout << maxblock[i] << endl; 
            //maxBlock = manyBlock - count;
            //cout << maxBlock;
    }
    // print out result
    for(int i=0; i<t; i++){
        cout << "Test case #" << i+1 << ": "  << maxblock[i] << endl;
    }
}