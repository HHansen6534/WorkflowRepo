#include <iostream>

using namespace std;

int main() {
  string name;
  string response;
  cout << "Hello World!" << endl;
  cout << "What is your name?" << endl;
  cin >> name;
  cout << "Well hello " << name
       << "! Welcome to this github repository! Are you admin or a developer? "
          "(A/D)";
  cin >> response;

  if (response == "A") {
    cout << " Welcome to the admin team!";
  } else {
    cout << "Welcome to the developer team!";
  }
}
