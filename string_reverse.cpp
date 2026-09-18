#include <iostream>
using namespace std;

int main() {
	char buffer[1000];

	cout << "Enter a string: ";
	cin.getline(buffer, 1000);

	// 1. Calculate length manually
	int len = 0;
	while (buffer[len] != '\0') {
		len++;
	}

	// Safety check for empty input
	if (len == 0) {
		cout << "Error: No input entered!" << endl;
		return 0;
	}

	// 2. Dynamic Memory Allocation
	char *str = new char[len + 1];

	// 3. Copy buffer contents
	for (int i = 0; i < len; i++) {
		str[i] = buffer[i];
	}
	str[len] = '\0';

	// 4. Manual Two-Pointer Swap
	int left = 0;
	int right = len - 1;
	while (left < right) {
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}

	// 5. Output
	cout << "Reversed string: " << str << endl;

	// 6. Free heap memory
	delete[] str;
	str = nullptr;

	getchar();
	return 0;
}