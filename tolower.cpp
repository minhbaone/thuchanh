#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string str1 ="HaaaaHHHHcccC";
    for(int i=0 ; i <= str1.size(); i++){
        char c=str1[i];
        putchar(tolower(c));
        // toupper(c)
    }
    return 0;
}