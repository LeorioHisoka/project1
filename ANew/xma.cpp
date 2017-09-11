#include <iostream> //it is done
#include <unistd.h>
int main(int argc, char *argv[]) {
  int n;
  int b, y;
  std::cout << "enter : ";
  std::cin >> n;
  for (int i = 0; i <= n; i++) {
    for (b = n; b > i; b--) {
      printf(" ");
    }
    for (y = 1; y <= i; ++y) {
      printf("*");
    }
    printf("\n");
  }
  // pause();
  return 0;
}
