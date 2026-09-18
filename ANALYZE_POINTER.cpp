#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

// Part 1: Function to analyze a given pointer
void analyze_pointer(int *ptr) {
	if (ptr != nullptr) {
		cout << "Memory Location: " << ptr << endl;
		cout << "Value:           " << *ptr << endl;
	}
	else {
		cout << "Error: Null pointer passed." << endl;
	}
}

int main() {
	// Part 2a: Stack allocation
	cout << "--- Stack Allocation ---" << endl;
	int iValue = 42;
	analyze_pointer(&iValue);

	cout << endl;

	// Part 2b: Heap allocation
	cout << "--- Heap Allocation ---" << endl;
	int *heapPtr = new int(100);
	analyze_pointer(heapPtr);

	// Free memory
	delete heapPtr;
	heapPtr = nullptr;
	getchar();
	return 0; // The program ends cleanly here
}