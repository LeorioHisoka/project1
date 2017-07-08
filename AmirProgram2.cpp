#include <iostream>
using namespace std;
static long int wo, result, b;
long int ao = 5;
long int lss = ao;
long int k = ao;
long int mulInt(int value, long int wo);
long int fact(long int so);
int main(int argc, char const *argv[]) {
  cout << fact(ao) << endl;
  cin >> wo >> b;
  result = wo;
  cout << mulInt(b, wo) << endl;
  return 0;
}
long int mulInt(int b, long int wo) {
  b--;
  int ss = wo;
  /* if (wo == 0 || b == 0) {
    return 0;
} else*/ if (b > 0 && wo > 0) {
    return mulInt(b, result + wo);
  } else if (ss > 0 && b == 0) {
    return ss;
  } else {
    return 0;
  }
}
long int fact(long int so) {
  lss--;
  if (lss > 0) {
    return k = fact(mulInt(lss, so));
  } else {
    return k;
  }
}
