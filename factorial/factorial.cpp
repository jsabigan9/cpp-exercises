#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter a non-negative integer: ";
	cin >> n;

	int factorial = 1;

	for (int i = 1; i <= n; ++i) {
		factorial *= i;
	}

	cout << "\nFactorial of " << n << ": " << factorial << endl;

	return 0;
}