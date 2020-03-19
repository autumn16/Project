#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> lib){
    for(int i=0; i<lib.size(); i++){
        cout << lib[i] << " ";
    }
}

void inssort(vector<int> &lib){
    lib.insert(lib.begin(),304);
}

int main(){
    /*
    int lib[] = {9,25,40,36,1,8};
    int n = sizeof(lib)/sizeof(lib[0]); */
    vector<int> lib = {1,2,3,4};
    int n = lib.size();
    inssort(lib);
    //lib.insert(lib.begin(),304);
    print(lib);
    cout << endl;
    return 0;
}