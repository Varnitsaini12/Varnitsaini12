#include <iostream>

using namespace std;

bool can_distribute_bananas(int n, int m) {
  // Check if n is greater than or equal to 2m.
  if (n < 2 * m) {
    return false;
  }

  // Calculate the number of bananas that each person would get if they were all given an equal number of bananas.
  int bananas_per_person = n / m;

  // Check if each person would get more than 1 banana.
  if (bananas_per_person <= 1) {
    return false;
  }

  // Check if there is a person who would get all of the bananas if they were all given an equal number of bananas.
  if (n % m == 0) {
    return false;
  }

  // If we reach here, then it is possible to distribute the bananas in such a way that each person gets more than 1 banana and no person gets all the bananas.
  return true;
}

int main() {
  int n, m;
  cout << "Enter the number of bananas and the number of people: ";
  cin >> n >> m;

  if (can_distribute_bananas(n, m)) {
    cout << "It is possible to distribute the bananas in such a way that each person gets more than 1 banana and no person gets all the bananas." << endl;
  } else {
    cout << "It is not possible to distribute the bananas in such a way that each person gets more than 1 banana and no person gets all the bananas." << endl;
  }

  return 0;
}
