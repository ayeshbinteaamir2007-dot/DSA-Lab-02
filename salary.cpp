#include <iostream>
#include <limits> // Required for numeric_limits
using namespace std;

int main() {
	const int size = 20;
	int salArray[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter Salary for employee " << (i + 1) << ": ";
		cin >> salArray[i];
	}

	for (int i = 0; i < size; i++) {
		salArray[i] = salArray[i] + (salArray[i] / 10);
	}

	cout << "\nUpdated Salaries: ";
	for (int i = 0; i < size; i++) {
		cout << salArray[i] << " ";
	}
	cout << endl;

	// PREVENT WINDOW FROM CLOSING AUTOMATICALLY
	cout << "\nPress Enter to exit...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear residual input newline
	cin.get(); // Waits for you to hit Enter before closing

	return 0;
}