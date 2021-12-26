#include <iostream>

using namespace std;

int main() {

short arr[] = { 1, 2, 3, 4, 5, 6, 7, 8}; 
short* p = &arr [0]; 
cout << (p + 5);

return 0;

}