#include <iostream>

using namespace std;

int main() {
	int summaryNumbers = 0;
	int inputNumber;

	for (int i = 0; i < 1000; i++) {
		cin >> inputNumber;

		if (!inputNumber) {
			break;
		}

		if (!(inputNumber % 8) && inputNumber > 9 && inputNumber < 100) {
			summaryNumbers += inputNumber;
		}
	}

	cout << summaryNumbers << endl;
}