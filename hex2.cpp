#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  int input;
  std::cout << "Enter decimal number: ";
  std::cin >> input;
  std::cout << "0x" << std::hex << input << '\n';
  int i;
  cout << "Enter a number: ";
  cin >> i;
  cout << hex << i;
}
