#include <iostream>
using namespace std;

int main() {
	double a, b;
	char operation;

	cout << "Enter first number: ";
	cin >> a;

	cout << "Enter operation (+, -, *, /): ";
	cin >> operation;

	cout << "Enter second number: ";
	cin >> b;

	switch (operation) {
	case '+':
		cout << "Result: " << a + b << endl;
		break;
	case '-':
		cout << "Result: " << a - b << endl;
		break;
	case '*':
		cout << "Result: " << a * b << endl;
		break;
	case '/':
		if (b != 0)
			cout << "Result: " << a / b << endl;
		else
			cout << "Error: division by zero!" << endl;
		break;
	default:
		cout << "Unknown operation!" << endl;
	}

}