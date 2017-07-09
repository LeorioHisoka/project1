#include <cctype>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
string sentence;
int main() {
  cout << "Input your name!" << endl;
  getline(cin, sentence);
  string tmp = sentence;
  cout << sentence[0] << endl;
  for (int i = 0; i < sentence.length(); i++) {

    tmp.at(i) = asm_capt(sentence.at(i));
    toupper(sentence[0]);
  }
  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] == ' ' && sentence[i + 1] != '\0') {
      sentence[0] = std::toupper(sentence[0]);

      cout << sentence[i + 1] << endl;
    }
  }
  return 0;
}
