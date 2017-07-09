#include <iostream>
using namespace std;
static long int  result, ao = 5, ss ,am=ao;
long int mulInt(long int value, long int wo);
long int fact(  long int so);
int main(int argc, char const *argv[]) {
cout <<"add= ";
long int wa,c;
cin >> wa >> c;
result = wa;
cout << mulInt(c, wa) << endl <<"fact= ";
//cin >> ao;

  fact(ao);
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
    int av = mulInt(am, so);
    cout << av << endl;
    return fact(av);
  } else {
    cout << so << endl;
    return 0;}}
