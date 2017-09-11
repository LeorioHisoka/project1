#include <iostream>
#include <stdint.h>
using namespace std;
// Print the size of all variable types in a table layout

int main() {
  enum amir {};
  std::cout << "bool:\t\t" << sizeof(bool) << "bytes";
  std::cout << "\nchar:\t\t" << sizeof(char) << "bytes";
  std::cout << "\nwchar_t:\t" << sizeof(wchar_t) << "bytes";
  std::cout << "\nchar16_t:\t" << sizeof(char16_t) << "bytes";
  std::cout << "\nchar32_t:\t" << sizeof(char32_t) << "bytes";
  std::cout << "\nshort:\t\t" << sizeof(short) << "bytes";
  std::cout << "\nshortint:\t" << sizeof(short int) << "bytes";
  std::cout << "\nint:\t\t" << sizeof(int) << "bytes";
  std::cout << "\nlong:\t\t" << sizeof(long) << "bytes";
  std::cout << "\nlonglong:\t" << sizeof(long long) << "bytes";
  std::cout << "\nlonglongint:\t" << sizeof(long long int) << "bytes";
  std::cout << "\nfloat:\t\t" << sizeof(float) << "bytes";
  std::cout << "\ndouble:\t\t" << sizeof(double) << "bytes";
  std::cout << "\nlongdouble:\t" << sizeof(long double) << "bytes";
  std::cout << "\nint8_t:\t\t" << sizeof(int8_t) << "bytes";
  std::cout << "\nint16_t:\t" << sizeof(int16_t) << "bytes";
  std::cout << "\nint32_t:\t" << sizeof(int32_t) << "bytes";
  std::cout << "\nint64_t:\t" << sizeof(int64_t) << "bytes";
  std::cout << "\nuint8_t:\t" << sizeof(uint8_t) << "bytes";
  std::cout << "\nuint16_t:\t" << sizeof(uint16_t) << "bytes";
  std::cout << "\nuint32_t:\t" << sizeof(uint32_t) << "bytes";
  std::cout << "\nuint64_t:\t" << sizeof(uint64_t) << "bytes";
  std::cout << "\nuint64_t:\t" << sizeof(uint64_t) << "bytes";
  std::cout << "\nintptr_t:\t" << sizeof(intptr_t) << "bytes";
  std::cout << "\nint_fast8_t:\t" << sizeof(int_fast8_t) << "bytes";
  std::cout << "\nint_fast16_t:\t" << sizeof(int_fast16_t) << "bytes";
  std::cout << "\nint_fast32_t:\t" << sizeof(int_fast32_t) << "bytes";
  std::cout << "\nint_fast64_t:\t" << sizeof(int_fast64_t) << "bytes";
  std::cout << "\nintmax_t:\t" << sizeof(intmax_t) << "bytes";
  std::cout << "\nint_least8_t:\t" << sizeof(int_least8_t) << "bytes";
  std::cout << "\nint_least16_t:\t" << sizeof(int_least16_t) << "bytes";
  std::cout << "\nint_least32_t:\t" << sizeof(int_least32_t) << "bytes";
  std::cout << "\nint_least64_t:\t" << sizeof(int_least64_t) << "bytes";
  std::cout << "\nenum:\t\t" << sizeof(enum amir) << "bytes";
  /*


  ;*/
  cout << "\nTheseSizesOfVariablesPrintOnGnu\\Linux\'OS\'\n";
  return 0;
}
