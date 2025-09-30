#include <iostream>
#include <vector>
#include <algorithm>
// #include "../../util/util.cpp"

using namespace std;

void getMaxNumber();
void getNumbers();
void multiplyNumbers(vector<int> numbers);
void reverseNumbers();
void printMessage(string message);

void week1pt2() {
  printMessage("Welcome to Week 1 Challenges Part 2");
  printMessage("------------------------------------");

  getMaxNumber();
  getNumbers();
  reverseNumbers();
}

// 1. Ask the user to input 5 integers and store them in a vector
//    a. Pass the vector into a function
//    b. Get the highest number in the vector
//    c. Print it out to the user
void getMaxNumber() {
  vector<int> numbers;
  printMessage("Enter 5 integers:");
  for (int i = 0; i < 5; ++i) {
    int num;
    cin >> num;
    numbers.push_back(num);
  }

  int maxNum = *max_element(numbers.begin(), numbers.end());
  printMessage("The highest number is: " + to_string(maxNum));
}

/*
  Ask the user for a number input - don't stop filling out your vector until the user presses 0
    a. Create another function
    b. Iterate every 2 items of the Vector and multiply it by 2
    c. print out the numbers
*/
void multiplyNumbers(std::vector<int> numbers) {
  vector<int> multipliedNumbers;
  for (size_t i = 0; i < numbers.size(); i += 2) {
    multipliedNumbers.push_back(numbers[i] * 2);
  }
  printMessage("Numbers: ");

  for (int num : multipliedNumbers) {
    printMessage(to_string(num));
  }
}

void getNumbers() {
  vector<int> numbers;
  int num;
  printMessage("Enter numbers (or 0 to stop):");

  while (true) {
    cin >> num;
    if (num == 0) 
      break;
    numbers.push_back(num);
  }

  multiplyNumbers(numbers);
}

/*
  3. Do a reverse for loop and print out the results
*/
void reverseNumbers() {
  int num;
  vector<int> numbers;
  vector<int> reversedNumbers;

  printMessage("Enter numbers to be reversed (or 0 to stop): ");
   while (true) {
    cin >> num;
    if (num == 0) 
      break;
    numbers.push_back(num);
  }

  for (int i = numbers.size() - 1; i >= 0; i--) {
    reversedNumbers.push_back(numbers[i]);
  }

  printMessage("Reversed Numbers:");
  printMessage("-----------------");
  for (int num : reversedNumbers) {
    printMessage(to_string(num));
  }
}

// // ----------------------------------
// // Util
// // ----------------------------------
// void print(string message) {
//   cout << message << endl;
// }