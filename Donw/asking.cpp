#include <iostream>
using namespace std;
int main()
{
    int Brothers,Sisters,Nephews,Nieces ;
/*    int A=(Brothers+Sisters);
    int B=(Nephews+Nieces);
    int C=(A+777)*(77/7)+B;*/
    cout << "How many Nephews do you have? ";
	cin >> Nephews;
	cout << "How many nieces do you have? ";
	cin >> Nieces;
	cout << "How many Brothers do you have? ";
	cin >> Brothers;
	cout << "How many Sisters do you have? ";
    cin >> Sisters;
    int A=(Brothers+Sisters);
    int B=(Nephews+Nieces);
    int C=(A+777)*(77/7)+B;
	cout << "Your Lucky Number is :"<<C<<endl;
    return 0;
}
