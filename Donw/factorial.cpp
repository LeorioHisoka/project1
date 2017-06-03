#include <iostream>
#include <stdio.h>
unsigned long int factorials(unsigned long int m) {
  unsigned long int n = 1; //ليه لازم نحط واحد هنا ؟
  while (m >= 1) {
    n *= m--;
  }
  return n;
}
int main(int argc, char *argv[]) {
  unsigned long int num;
  printf("enter a number : ");
  std::cin >> num;
  if (num >= 1) {
    unsigned long int x = num;
    unsigned long int re;
    re = factorials(num);
    std::cout << "!" << x << " = " << re << "\n";
  } else {
    printf("WrongNumber\n");
  }
  return 0;
}
