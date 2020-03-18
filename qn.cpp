    #include <iostream>

using namespace std;

bool inLib(char lib[], char &c, int first, int pos){
    for(int i=first; i<pos; i++){
        if(c==lib[i]) return true;
    } return false;
}

int main(){
    string str = "abaac";
    //cin >> str;
    char lib[str.size()];
    for(int i=0; i<str.size(); i++){
        lib[i]=str[i];
    }
    int count = 0;
    int max = 0;
    int first = 0;
    for(int i=0; i<str.size(); i++){
        if(inLib(lib,lib[i],first,i)==false){
            count++;
            if(max<count) max = count;
        } else{
            first=i+1;
            if(max<count) max = count;
            count=1;
        }
    }
    cout << max << endl;
    return 0;
}