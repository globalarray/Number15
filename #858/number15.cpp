#include <iostream>

using namespace std;

int main() {
	int countNumbers, finalNumber, number;

	cin >> countNumbers;

	for (int i = 0; i < countNumbers; i++) {
		cin >> number;
		if (!(number % 2)) {
			if (finalNumber == 0 || number < finalNumber) {
				finalNumber = number;
			}
		}
	}
	cout << finalNumber << endl;
	return 0;
}