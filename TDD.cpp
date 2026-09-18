#include <iostream>
#include <cassert>
using namespace std;

// PRELIMINARY (INCORRECT) IMPLEMENTATION
bool isSorted(const int* arr, const int size) {
	if (arr == nullptr || size <= 1) {
		return true;
	}

	for (int i = 0; i < size - 1; i++) {
		if (arr[i] >= arr[i + 1]) { // FLAWED LOGIC: Fails on duplicate values
			return false;
		}
	}

	return true;
}

// ==========================================
// TEST CASES
// ==========================================

// 1. Standard ascending array -> PASSES (returns true)
void testAscendingArray() {
	int arr[] = { 1, 2, 3, 4, 5 };
	assert(isSorted(arr, 5) == true);
}

// 2. Unsorted array -> PASSES (returns false)
void testUnsortedArray() {
	int arr[] = { 1, 4, 3, 5, 6 };
	assert(isSorted(arr, 5) == false);
}

// 3. Sorted with duplicates -> FAILS HERE! (returns false, expected true)
void testDuplicatesArray() {
	int arr[] = { 1, 2, 2, 3, 5 };
	assert(isSorted(arr, 5) == true); // <--- PROGRAM CRASHES HERE (ASSERTION FAILED)
}

// 4. Single element -> PASSES (returns true)
void testSingleElementArray() {
	int arr[] = { 42 };
	assert(isSorted(arr, 1) == true);
}

// 5. Descending array -> PASSES (returns false)
void testDescendingArray() {
	int arr[] = { 5, 4, 3, 2, 1 };
	assert(isSorted(arr, 5) == false);
}

// 6. Negative values -> PASSES (returns true)
void testNegativeValuesArray() {
	int arr[] = { -10, -5, 0, 5, 10 };
	assert(isSorted(arr, 5) == true);
}

// 7a. All identical -> FAILS (returns false, expected true)
void testAllIdenticalElements() {
	int arr[] = { 7, 7, 7, 7 };
	assert(isSorted(arr, 4) == true);
}

// 7b. Unsorted negative -> PASSES (returns false)
void testUnsortedNegativeArray() {
	int arr[] = { -2, -10, 0, 5 };
	assert(isSorted(arr, 4) == false);
}

int main() {
	testAscendingArray();       // Pass
	testUnsortedArray();        // Pass
	testDuplicatesArray();      // FAILS! Execution halts here.

	// The rest never execute due to the assert crash above:
	testSingleElementArray();
	testDescendingArray();
	testNegativeValuesArray();
	testAllIdenticalElements(); // Would also fail if reached
	testUnsortedNegativeArray();

	return 0;
}