#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	a = a | (1 << (3 - 1)); // bat bit
	// tat bit a = a & ~(1 << (n - 1));
	cout << a;
	return 0;
}