#include <iostream>
using namespace std;

int main(){
    int thang;
    cout<<"thang: ";
    cin>>thang;
    switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            cout<<"31ngay";
            break;
        }
        case 4:
        case 6:
        case 9:
        case 11:
        {
            cout<<"30ngay";
            break;
        }
        default :{
            cout<<"thang 2";
            break;
        }

    }
    return 0;
}