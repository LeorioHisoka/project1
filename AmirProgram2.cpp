#include <iostream>
using namespace std;
static long int  result;
long int ao = 5;
long int ss ;
long int e;
long int am=ao;
long int mulInt(long int value, long int wo);
long int fact( long int so);
int main(int argc, char const *argv[]) {
cout <<"add= ";
long int wa,c;
cin >> wa >> c;
result = wa;
cout << mulInt(c, wa) << endl;
cout <<"fact= ";
cin >> ao;
  fact( ao);
  return 0;}
long int mulInt(long int nn, long int wo) { //الدالة مش بتتعامل بالسالب
  nn--;
     ss = wo;
  if (nn >= 1 && wo >= 1) {
    return mulInt(nn, result + wo);
  } else if (ss > 0 && nn == 0) {
    return ss;
  } else {
    return 0;}}

long int fact( long int so) {
  am--;
  if (am >= 1) {
    int l = mulInt(am, so);
    cout << l << endl;
    return fact( l);
  } else {
    cout << so << endl;
    return 0;}}
