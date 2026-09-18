#include <iostream>
#include <cassert>
using namespace std;

// Function declaration
bool isSorted(const int* arr, const int size);

// ==========================================
// SEPARATE TEST FUNCTIONS
// ==========================================

// 1. An array already sorted in ascending order
void testAscendingArray() {
	int arr[] = { 1, 2, 3, 4, 5 };
	assert(isSorted(arr, 5) == true);
	cout << "[PASS] Ascending Array" << endl;
}

// 2. An unsorted array
void testUnsortedArray() {
	int arr[] = { 1, 4, 3, 5, 6 };
	assert(isSorted(arr, 5) == false);
	cout << "[PASS] Unsorted Array" << endl;
}

// 3. A sorted array containing duplicate values
void testDuplicatesArray() {
	int arr[] = { 1, 2, 2, 3, 5 };
	assert(isSorted(arr, 5) == true);
	cout << "[PASS] Duplicates Array" << endl;
}

// 4. An array containing only one element
void testSingleElementArray() {
	int arr[] = { 42 };
	assert(isSorted(arr, 1) == true);
	cout << "[PASS] Single Element Array" << endl;
}

// 5. An array sorted in descending order
void testDescendingArray() {
	int arr[] = { 5, 4, 3, 2, 1 };
	assert(isSorted(arr, 5) == false);
	cout << "[PASS] Descending Array" << endl;
}

// 6. An array containing negative values
void testNegativeValuesArray() {
	int arr[] = { -10, -5, 0, 5, 10 };
	assert(isSorted(arr, 5) == true);
	cout << "[PASS] Negative Values Array" << endl;
}

// 7a. Custom Test 1: All elements are identical
void testAllIdenticalElements() {
	int arr[] = { 7, 7, 7, 7 };
	assert(isSorted(arr, 4) == true);
	cout << "[PASS] All Identical Elements" << endl;
}

// 7b. Custom Test 2: Unsorted array with negative numbers
void testUnsortedNegativeArray() {
	int arr[] = { -2, -10, 0, 5 };
	assert(isSorted(arr, 4) == false);
	cout << "[PASS] Unsorted Negative Array" << endl;
}

// Master function to run all test suites
void runAllTests() {
	cout << "--- Running TDD Test Suite ---" << endl;
	testAscendingArray();
	testUnsortedArray();
	testDuplicatesArray();
	testSingleElementArray();
	testDescendingArray();
	testNegativeValuesArray();
	testAllIdenticalElements();
	testUnsortedNegativeArray();
	cout << "--- All Tests Passed Successfully! ---" << endl;
}

// ==========================================
// FUNCTION IMPLEMENTATION
// ==========================================

bool isSorted(const int* arr, const int size) {
	if (arr == nullptr || size <= 1) {
		return true;
	}

	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			return false;
		}
	}

	return true;
}

int main() {
	// Run the isolated test functions
	runAllTests();

	return 0;
}
