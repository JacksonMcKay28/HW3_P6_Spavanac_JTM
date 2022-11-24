#include <iostream>

using namespace std;

int main() {
  int hours;
  int mins;
  int earlyhours;
  int earlymins;

  cin >> hours >> mins;

  if (mins >= 45) {
    earlyhours = hours;
    earlymins = mins - 45;}
  else {
    earlyhours = hours - 1;
    earlymins = mins + 15;
  }

  cout << earlyhours << " " << earlymins;
  }