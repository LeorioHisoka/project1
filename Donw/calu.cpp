#include <iostream>
#include <math.h>
#include <stdint.h>
using namespace std;
long double Addition(long double one, long double two) { return {one + two}; }
long double Subtraction(long double one, long double two) {
  return {one - two};
}
long double Multiplication(long double one, long double two) {
  return {one * two};
}
long double Division(long double one, long double two) { return {one / two}; }
long double Power(long double one, long double two) { return {pow(one, two)}; }
/* long double Sineangle(long double one, long double two) {
 long double Opposite, Hypotenuse;
return {one + two};
}*/
/* long double Cosine_angle(long double one, long double two) {
return {one + two};
}*/
// long double Tana_ngle(long double one, long double two) { return {one + two};
// }
// long double Cota_nangle(long double one, long double two) { return {one +
// two}; }
// long double Sec_angle(long double one, long double two) { return {one + two};
// }
// long double Cosec_angle(long double one, long double two) { return {one +
// two}; }
long double Lognumber(long double one) {
  for (int i = 0; i < 12; ++i) {
    one = sqrt(one);
  }
  one = (one)-1;
  one = (one * (1780.1892));
  return one;
}
/* long double Exponential(long double one, long double two) {
return {one + two};
}*/
long double Squareroot(long double one) { return {sqrt(one)}; }
long double Cubicroot(long double one) { return {cbrt(one)}; }
/* long double Absolutevalue(long double one, long double two) {
return {one + two};
}*/
int main(int argc, char *argv[]) {
  long double one, two /*, Hypotenuse*/;
  char ch, continu = 'y';
  bool loop = true;
  std::cout << "Oh HELLO SIR\nLet\'s Calculate SomeThing \n";
  while (loop == true) {
    cout << "We Can Calculate in only these opreation\n\n";
    cout << "\'a\' For Addition";
    cout << "\t\t\'s\' For Subtraction";
    cout << "\t\'m\' For Multiplication";
    cout << "\n\'d\' For Division";
    cout << "\t\t\'w\' For Power";
    cout << "\t\t\'l\' For Log number";
    cout << "\n\'q\' For Square root";
    cout << "\t\t\'c\' For Cubic root";
    cout << "\t\'x\' To Exit The Program\n";
    cout << "\nType a characters : ";
    cin >> ch;
    bool continuation = true;
    switch (ch) {
    case 'a':
      std::cout << "\nEnter the first number : ";
      cin >> one;
      std::cout << "\nEnter the second number : ";
      cin >> two;
      std::cout << "The Results are : " << Addition(one, two) << "\n";
      break;
    case 's':
      std::cout << "\nEnter the first number : ";
      cin >> one;
      std::cout << "\nEnter the second number : ";
      cin >> two;
      std::cout << "The Results are : " << Subtraction(one, two) << "\n";
      cin >> one >> two;
      break;
    case 'm':
      std::cout << "\nEnter the first number : ";
      cin >> one;
      std::cout << "\nEnter the second number : ";
      cin >> two;
      std::cout << "The Results are : " << Multiplication(one, two) << "\n";
      break;
    case 'd':
      std::cout << "\nEnter the first number : ";
      cin >> one;
      std::cout << "\nEnter the second number : ";
      cin >> two;
      std::cout << "The Results are : " << Division(one, two) << "\n";
      break;
    case 'w':
      std::cout << "\nEnter  a number : ";
      cin >> one;
      std::cout << "\nEnter The Velue of power : ";
      cin >> two;
      std::cout << "The Results are : " << Power(one, two) << "\n";
      break;
    case 'l':
      std::cout << "\nEnter a number : ";
      cin >> one;
      std::cout << "The Results are : " << Lognumber(one) << "\n";
      break;
    case 'q':
      std::cout << "\nEnter a number : ";
      cin >> one;
      std::cout << "The Results are : " << Squareroot(one) << "\n";
      break;
    case 'c':
      std::cout << "\nEnter a number : ";
      cin >> one;
      std::cout << "The Results are : " << Cubicroot(one) << "\n";
      break;
    case 'x':
      loop = false;
      continuation = false;
      std::cout << "\nGoodBay \n";
      break;
    default:
      std::cout << "\nYou Have Typed A wrong Enterd ";
      loop = true;
      continuation = false;
      std::cout << "\nplease try again";
      break;
    }
    // std::cout << Sineangle(one, two) << "\n";
    // std::cout << Cosineangle(one, two) << "\n";
    // std::cout << Absolutevalue(one, two) << "\n";
    // std::cout << Tan_angle(one, two) << "\n";
    // std::cout << Cota_nangle(one, two) << "\n";
    // std::cout << Cosec_angle(one, two) << "\n";
    // std::cout << Sec_angle(one, two) << "\n";
    // std::cout << Exponential(one, two) << "\n";
    if (continuation == true) {
      cout << "\nDo You Want To Calculate SomeThing eles ?: ";
      cin >> continu;
      if (continu != 'Y' || continu != 'y') {
        loop = true;
      }
    }
  }
  return 0;
}
