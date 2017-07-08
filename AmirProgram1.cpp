#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
char printHexDig(unsigned long int);
long int printHexNum(unsigned int);
int main(int argc, char const *argv[]) {
  std::cout << "N\t\b\b\b" << printHexDig(17) << '\n';
  std::cout << "N" << printHexNum(2) << '\n';
}
char printHexDig(unsigned long int DecimalV) {
  const char HexN[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                         '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  if (DecimalV >= 0 | DecimalV <= 16) {
    return HexN[DecimalV];
  } else {
    return -1;
  }
}
long int printHexNum(unsigned int DecNum) {
  int c = 10, c2 = 0, c3 = 0;
  char hex[8];
  const char letter[6] = {65, 66, 67, 68, 69, 70};
  const char number[10] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
  cout << "Your number in hexadecimal form is: " << endl;
  while (DecNum >= 1) {
    c = 10, c2 = 0;
    if ((DecNum % 16) < 10) {
      while (c2 != DecNum % 16) {
        c2++;
      }
      hex[c3] = number[c2];
    }
    c2 = 0;
    if ((DecNum % 16) >= 10) {
      while (DecNum % 16 != c) {
        c2++; 
        c++;  
      }
      hex[c3] = letter[c2];
    }
    DecNum = 16;
    c3++; 
        
  }
  while (c3 >= 0) {
 
    if (c3 <= 0)
  
      c3--;
    cout << hex[c3];
  }
}
