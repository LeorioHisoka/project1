#include <iostream> //it is done
int main(int argc, char *argv[]) {
  int n;
  std::cout << "enter : ";
  std::cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int y = 0; y < i; y++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
