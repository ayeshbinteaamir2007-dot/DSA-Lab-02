#include <iostream>
using namespace std;

int main() {
    const int size = 20;

    // Dynamically allocate array memory on the heap using a pointer
    int *salArray = new int[size];

    // Input salaries using pointer indexing
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> salArray[i]; // Can also be written as: cin >> *(salArray + i);
    }

    // Update salaries (10% increase)
    for (int i = 0; i < size; i++) {
        salArray[i] = salArray[i] + (salArray[i] / 10);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << salArray[i] << " ";
    }
    cout << endl;

    // Free the dynamically allocated heap memory to prevent memory leaks
    delete[] salArray;
    salArray = nullptr; // Reset pointer to avoid dangling references

    return 0;
}
