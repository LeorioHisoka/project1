#include <iostream> //it is done
int main(int argc, char *argv[]) { //البرنامج اخد يوم كامل قدام اللاب هههههه
  int n;
  std::cout << "enter : ";
  std::cin >> n;
  int y = n; // 4
  int o = 0; // 1
  for (int i = 0; i <= n; i++) {
    int u = y; // 1
    while (u >= 1) {
      std::cout << " ";
      u--;
    }
    if (o != 0) {
      std::cout << "*";
    }
    int t = 1; // 0
    while (t < o) {
      std::cout << " ";
      ++t;
    }
    if (o != 0) {
      std::cout << "*";
      ++o;
    }
    std::cout << "\n";
    --y;
    ++o;
  }
  for (int i = 0; i < n * 2; i++) {
    std::cout << "*";
  }
  std::cout << "\n";
  return 0;
}
