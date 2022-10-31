#include <iostream>

using namespace std;

int main() {
	int firstNumber, finalNumber, countEvenNumbers;

	cin >> firstNumber;
	cin >> finalNumber;

	finalNumber++;

	while (firstNumber < finalNumber) {
		if (!(firstNumber % 2)) {
			countEvenNumbers++;
		}
		firstNumber++;
	}
	cout << countEvenNumbers << endl;
	return 0;
}