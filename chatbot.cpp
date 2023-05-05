#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  cout << "Hello! What is your name?" << endl;
  string name;
  cin >> name;
  cout << "Hello " << name
       << "! How can I help you today? Please select from the following "
          "options: (1, 2, 3, 4)"
       << endl;
  cout << "1) What is the weather like today?" << endl;
  cout << "2) Calculate my total price with tax" << endl;
  cout << "3) Add or multiply a number for me!" << endl;
  cout << "4) Generate a random number for me!" << endl;
  int num;
  cin >> num;

  if (num == '1') {
    cout
        << "The weather should be nice and sunny out today! Since it is spring "
           "and gets cooler in the evening, I woul dbring a small jacket!"
        << endl;
  }
  if (num == '2') {
    cout << "What is your total price?" << endl;
    int price;
    cin >> price;
    int tax;
    int finaltotal;
    tax = price * 0.085;
    finaltotal = price + tax;
    cout << "You're final total with tax included is $" << finaltotal << " ! "
         << endl;
  }
  if (num == '3') {
    cout << " Would you like to add or multiply a number? (A/M)" << endl;
    string response;
    cin >> response;
    if (response == "M") {
      cout << "What is your first number?" << endl;
      int num1;
      cin >> num1;
      cout << "What is your second number?" << endl;
      int num2;
      cin >> num2;
      int product;
      product = num1 * num2;
      cout << "You're number when multiplied equals: " << product << " !"
           << endl;
    }
    if (response == "A") {
      cout << "What is your first number?" << endl;
      int number1;
      int number2;
      cin >> number1;
      cout << "What is your second number?" << endl;
      cin >> number2;
      int sum;
      sum = number1 + number2;
      cout << "Your number when added together equals: " << sum << "!" << endl;
    }
  }
  if (num == '4') {
    cout << "Press '1' to generate a number 1 and 100!" << endl;
    int one;
    cin >> one;
    int generateRandomNumber() {
      srand(time(NULL));

      int random = rand() % 100 + 1;
      return randomNumber;
    }
  }
}