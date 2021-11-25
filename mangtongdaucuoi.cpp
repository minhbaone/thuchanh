#include<iostream>

using namespace std;

int main() {
    int sum;
    int n;
    cout <<"nhap n ";
    cin >>n;
    int arr[n];
    for (int i=0 ; i<=n ; i++){
        cin >> arr[i];
    }
    sum = arr[0] + arr[n-1];
    cout << sum;
    return 0;
}
