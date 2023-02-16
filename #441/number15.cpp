#include <iostream>

using namespace std;

int main() {
  int countCars, countPassCars, carSpeed, diff, maxSpeed, minSpeed = 0;

  cin >> countCars;

  if (countCars >= 1 && countCars <= 30) {
    for (int i = 0; i < countCars; i++) {
      cin >> carSpeed;

      if ((carSpeed >= 1) && (carSpeed <= 300)) {
        if (carSpeed <= 30) countPassCars++;
        if (carSpeed > maxSpeed) maxSpeed = carSpeed;
        if (carSpeed < minSpeed || minSpeed == 0) minSpeed = carSpeed;
      }
    }
  }

  cout << maxSpeed - minSpeed << endl;
  cout << countPassCars << endl;
  return 0;
}
