#include <iostream>
using namespace std;

int main() {
  const int SIZE = 4;
  int grades[SIZE]; // this is to so how many grades will be stored

  cout << "Enter " << SIZE << " grades:\n";

  for (int i = 0; i < SIZE; i++)
  {
    cin >> grades[i]; // i beleive this is for the grades to be inputed and stored from 1st to 5th.
  }

  int sum = 0;
  int average = 0;
  cout << endl;
  for (int i = 0; i < SIZE; i++)
  {
    cout << "Element " << i+1 << " is " << grades[i] << endl; // this is the output in the order from 1st-5th.
    sum = sum + grades[i]; // this is to determine the sunm of the grades.
    average = sum / 4;
  }

  cout << "The sum of the " << SIZE << " numbers is " << sum << endl;
  cout << "The average of the " << SIZE << " numbers is " << average << endl;
}