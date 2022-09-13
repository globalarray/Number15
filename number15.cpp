#include <iostream>
using namespace std;

int main() {
	int daysSuitable, temp, daysNum = 0;
	double averageTemp, daysTemps;
	cin >> daysNum;

	if (daysNum < 1 or daysNum > 31) {
		return 1;
	}

	for (int i = 0; i < daysNum; i++) {
		cin >> temp;
		daysTemps += temp;
		if (temp > 0) {
			daysSuitable++;
		}
	}
	averageTemp = daysTemps / daysNum;
	cout << averageTemp << endl;
	if (daysSuitable >= 5) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}
