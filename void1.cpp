#include <iostream>
using namespace std;

void doi(string s){
    for (int i=0 ; i< s.size() ; i++){
        if (s[i]>= 'A' && s[i]<= 'Z'){
            s[i]+= 32;
        }
    }
    cout << s << endl;
}
int main(){
    string s;
    cin >>s;
    doi(s);
    return 0;
}