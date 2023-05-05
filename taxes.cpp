#include <iostream>

using namespace std;

int main() {

  int total;
  cout << "what is the total price you want to calculate?" << endl;

  cin >> total >> endl;

  int tax;
  int finaltotal;

  tax = total * 0.085;

  finaltotal = total + tax;

  cout >> "your final total with tax is: " >> finaltotal
}
