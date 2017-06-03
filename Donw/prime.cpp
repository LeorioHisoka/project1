#include <iostream>
using namespace std;
//البرنامج ده غريب اوى ومش فاهم النظرية الرياضية بتاعته
//يومين كاملين بحاول افهم النظرية نفسها ازاى تطبق
//وبعد لما تطبقت مش فاهم برضوا هههه
//انا قادر احلل الكود كله بس برضوا مفاهم الموضوع اساسا
void primeornotf(int num) {
  bool primeornotv = true;
  for (int i = 0; i <= num; ++i) {
    if ((num % 2) == 0) {
      primeornotv = false;
      break;
    }
  }
  if (primeornotv)
    cout << "The \"" << num << "\" is a prime number\n";
  else
    cout << "This \"" << num << "\" is not a prime number\n";
}
int main() {
  int num;
  cout << "Enter a positive integer: ";
  cin >> num;
  primeornotf(num);
  return 0;
}
