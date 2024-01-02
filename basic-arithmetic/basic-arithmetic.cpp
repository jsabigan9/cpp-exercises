#include <iostream>
using namespace std;

int main() {
	double num1, num2;

	cout << "Enter two numbers: " << endl;
	cin >> num1 >> num2;

	cout << "The sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
	cout << "The difference of " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;
	cout << "The product of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;

	if (num2 != 0) {
		cout << "The quotient of " << num1 << " and " << num2 << " is: " << num1 / num2 << endl;
	}
	else {
		cout << "Cannot divide by zero." << endl;
	}

	return 0;
}
