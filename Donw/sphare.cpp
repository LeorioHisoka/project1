#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;
float xvolume(float nvolume){
	float Qanoon;
	Qanoon=((4 * nvolume)/((3)*(3.14)));
	Qanoon=cbrt(Qanoon);
	return Qanoon;//العائد هو نصف القطر
} //الدالة سليمة

float xdiameter(float ndiameter)   //استخراج نصف القطر من القطر كامل
{
	float Qanoon;
	Qanoon = (ndiameter / 2); //الدالة سليمة
	return Qanoon;
} //العائد هو نصف القطر
float xarea(float narea)   //حساب القطر من المساحة
{
	float Qanoon;
	Qanoon = (sqrt(narea/((4)*(3.14))));
	 //الدالة سليم
	return Qanoon; //العائد هو نصف القطر
}
float xsurrounding(float nsurroundingv)   //استخراج القطر من المحيط
{
	float Qanoon; //نصف قطر الدائرة هو نفسه نصف قطر الكره
	Qanoon = (nsurroundingv / (3.14)); //الدالة سليمة
	return Qanoon;
} //العائد هو القطر
float diameter(float Nradius)   //حساب القطر كامل من نصف القطر
{
	float Qanoon;
	Qanoon = (Nradius * 2); //الدالة سليمة
	return Qanoon;          //العائد هو القطر
}
float area(float Nradius)   //حساب المساحة انطلاقا من نصف القطر
{
	float Qanoon;
	Qanoon = (4 * (pow(Nradius, 2)) * (3.14)); // areaOfSphere
	return Qanoon;
} //الدالة سليمة
float Volume(float diameter)
{
	float Qanoon;
	float pi = 3.14;
	Qanoon = ((4 * pi) * (diameter * diameter * diameter) / 3); // volumeOfSphere
	return Qanoon;
}
float surrounding(float Nradius)   //حساب المحيط انطلاقا من نصف المقطر
{
	float Qanoon;
	Qanoon = ((3.14)*(pow(Nradius,2)));
	return Qanoon;
}
int main()
{
	float radiusv, diameterv, surroundingv, areav, volumev;
	char answer1, answer2;bool wa=true;
	string answer3;
	cout<<"oh, Hello sir,";
	cout<<"\n----------------------------------------------\n";
	cout<<"----------------------------------------------\n";
	cout<<"\nI am a computer Program called OBA,";
	cout<<"\ncreated to calculate The Area ,Radius ,Diameter ,\nSurrounding ,and "
	     "Volume of The Sphere\n----------------------------------------------\nI can calculate starting from any of them's "
	     "data ";
	cout<<" \nLet\'s begin to see What I can do for you";
	cout<<"\n----------------------------------------------\n";
	cout<<"----------------------------------------------\n";
	while (wa==true){
		cout<<"\nSo What Do We want to calculate \n\"Volume Or Area Or Radius Or Diameter Or Surrounding\" ?\n";
		cout<<"\n\'a\' For Area \t\t\'v\' For Volume \n\'r\' For Radius \t\t\'d\' For Diameter  \n\'s\' for Surrounding\t\'x\' To  Exit\nWhich Of these do youneed to calculate : ";
		cin>>answer1;
		cout<<"----------------------------------------------\n";
			if (answer1 == 'a') { // except the Volume
					cout<<"\n\"The Volume\" \t\t\'v\'\n\"The Radius\" \t\t\'r\'\n\"The "
						 "Diameter\" \t\t\'d\'\n\"The Surrounding\"\t\'s\'";
					cout<<"\nWhat Do you have From those : ";
					cin>>answer2;

						switch (answer2) {

						case 'r': // it is done
							cout<<"please enter the Value Of Radius : ";
							cin>>radiusv;
							cout<<"The Value of Area Of The Sphere is : " <<area(radiusv)
								 <<endl;
							break;

						case 'd': // it is done
							cout<<"please enter the Value Of Diameter : ";
							cin>>diameterv;
							// radiusv = (diameterv / 2 );
							radiusv = xdiameter(diameterv);
							cout<<"The Value of Area Of The Sphere is : " <<area(radiusv)
								 <<endl;
							break; //تم الاختبار

						case 'v' :
								cout<<"please enter the Value Of Volume : ";
								cin>>volumev;
								radiusv=xvolume(volumev);
								areav=area(radiusv);
								cout<<"The Value of Area Of The Sphere is :"<<areav<<endl;
								break;


						case 's': // it is done
							cout<<"please enter the Value Of Surrounding : ";
							cin>>surroundingv;
							diameterv = xsurrounding(surroundingv);
							radiusv = xdiameter(diameterv);
							cout<<"The Value of Area Of The Sphere is : " <<area(radiusv)
								 <<endl;
							break; //تم الاختبار

						default:
							cout<<"Worng typing, please type again\n";
						}
			} else if (answer1 == 'v') {
					cout<<"\n\"The Area\" \t\t\'a\'\n\"The Radius\" \t\t\'r\'\n\"The "
						 "Diameter\" \t\t\'d\'\n\"The Surrounding\"\t\'s\'";
					cout<<"\nWhat Do you have From those : ";
					cin>>answer2;

						switch (answer2) {

						case 'a'://it is done
							cout<<"please enter the Value Of Area : ";
							cin>>areav;
							radiusv=xarea(areav);
							cout<<"The Value of Volume Of The Sphere is : " <<Volume(radiusv)
								 <<endl;
							break;

						case 'r'://it is done
							cout<<"please enter the Value Of Radius : ";
							cin>>radiusv;
							cout<<"The Value of Volume Of The Sphere is : " <<Volume(radiusv)
								 <<endl;
							break;

						case 'd'://it is done
							cout<<"please enter the Value Of Diameter : ";
							cin>>diameterv;
							radiusv=xdiameter(diameterv);
							cout<<"The Value of Volume Of The Sphere is : " <<Volume(radiusv)//...............................
								 <<endl;
							break;

						case 's'://it is done
							cout<<"please enter the Value Of Surrounding : ";
							cin>>surroundingv;
							radiusv=xsurrounding(surroundingv);
							cout<<"The Value of Volume Of The Sphere is : " <<Volume(radiusv)<<endl;
							break;

						default:
							cout<<"Worng typing, please type again\n";
						}

			} else if (answer1 == 'r') { // except the Volume
					cout<<"\n\"The Area\"\t\t\'a\' \n\"The Volume\" \t\t\'v\' \n\"The "
						 "Diameter\" \t\t\'d\'\n\"The Surrounding\"\t\'s\'";
					cout<<"\nWhat Do you have From those : ";
					cin>>answer2;

						switch (answer2) {

						case 'd': // it is done
							cout<<"please enter the Value Of Diameter : ";
							cin>>diameterv;
							radiusv = xdiameter(diameterv);
							cout<<"The Value of Radius Of The Sphere is : " <<radiusv <<endl;
							break; //تم الاختبار

						case 'a': // it is done
							cout<<"please enter the Value Of Area : ";
							cin>>areav;
							radiusv = xarea(areav);
							cout<<"The Value of Radius Of The Sphere is : " <<radiusv <<endl;
							break; //تم الاختبار

						case 'v' :
								cout<<"please enter the Value Of Volume : ";
								cin>>volumev;
								radiusv=xvolume(volumev);
								cout<<"The Value of Radius Of The Sphere is :"<<radiusv <<endl;
								break;

						case 's': // it is done
							cout<<"please enter the Value Of Surrounding : ";
							cin>>surroundingv;
							diameterv = xsurrounding(surroundingv);
							radiusv = xdiameter(diameterv);
							cout<<"The Value of Radius Of The Sphere is : " <<radiusv <<endl;
							break; //تم الاختبار

						default:
							cout<<"Worng typing, please type again\n";
						}

			} else if (answer1 == 'd') { // except the Volume
					cout<<" \n\"The Area\" \t\t\'a\' \n\"The Volume\" \t\t\'v\'\n\"The "
						 "Radius\" \t\t\'r\'\n\"The Surrounding\"\t\'s\'";
					cout<<"\nWhat Do you have From those : ";
					cin>>answer2;

						switch (answer2) {

						case 'r': // it is done
							cout<<"please enter the Value Of Radius : ";
							cin>>radiusv;
							cout<<"The Value of Diameter Of The Sphere is : " <<diameter(radiusv)<<endl;
							break; //تم الاختبار

						case 'a': // ir is done
							cout<<"please enter the Value Of Area : ";
							cin>>areav;
							radiusv = xarea(areav);
							diameterv=diameter(radiusv);
							cout<<"The Value of The Diameter Of The Sphere is : " <<diameterv<<endl;
							break; //تم الاختبار

						case 'v':
							cout<<"please enter the Value Of Volume : ";
							cin>>volumev;
							radiusv=xvolume(volumev);
							diameterv=diameter(radiusv);
							cout<<"The Value of The Diameter Of The Sphere is : "<<diameterv<<endl;
							break;

						case 's': // it is done
							cout<<"please enter the Value Of Surrounding : ";
							cin>>surroundingv;
							diameterv = xsurrounding(surroundingv);
							cout<<"The Value of The Diameter Of The Sphere is : " <<diameterv<<endl;
							break; //تم الاختبار

						default:
							cout<<"Worng typing, please type again\n";
						}
			} else if (answer1 == 's') { // except the Volume
					cout<<"\n\"Volume\" \t\t\'v\' \n\"The Area\" \t\t\'a\'\n\"The Radius\" "
						 "\t\t\'r\'\n\"The Diameter\" \t\t\'d\'";
					cout<<"\nWhat Do you have From those : ";
					cin>>answer2;

						switch (answer2) {
						case 'r': // it is done
							cout<<"please enter the Value Of Radius : ";
							cin>>radiusv;
							cout<<"The Value of The Surrounding Of The Sphere is : "
								 <<surrounding(radiusv) <<endl;
							break;  //تم الاخنبار
						case 'd': // it is done
							cout<<"please enter the Value Of Diameter : ";
							cin>>diameterv;
							radiusv = xdiameter(diameterv);
							cout<<"The Value of Surrounding Of The Sphere is : "
								 <<surrounding(radiusv) <<endl;
							break; //تم الاخنبار

						case 'a': // it is done
							cout<<"please enter the Value Of Area : ";
							cin>>areav;
							diameterv = xarea(areav);
							radiusv = xdiameter(diameterv);
							cout<<"The Value of Surrounding Of The Sphere is : "
								 <<surrounding(radiusv) <<endl;
							break; //تم الاخنبار

						case 'v' :
								cout<<"please enter the Value Of Volume : ";
								cin>>volumev;
								radiusv=xvolume(volumev);
								cout<<"The Value of The Surrounding Of The Sphere is:"<<surrounding(radiusv)<<endl;
								break;

						default:
							cout<<"Worng typing, please type again\n";
						}
			} else if (answer1 == 'x') {
				cout<<"----------------------------------------------\n";
				cout<<"\t\b\b\bGreat To Work With You Sir , GOODBEY\n";
				cout<<"----------------------------------------------\n";
				cout<<"----------------------------------------------\n";
				break;
			} else if (answer1 != ('s') || ('d') || ('r') || ('v') || ('a')||('x')){
				cout<<"Sorry The Opreation cannot be Done Without right true value \nexist above on the list You Have enterd a Wrong Character\n\tlet\'s try again please\n";}
		cout<<"----------------------------------------------\n";
		cout<<"----------------------------------------------\n";
		cout<<"Do you want to do a new calculate ? : ";
		cin>>answer3;
		if (answer3 == "yes" || answer3 == "y" || answer3 == "YES" ||answer3 == "Yes"||answer3 =="Y"){wa=true;}
		else{wa = false ;}
		system("clear");
		cout<<"----------------------------------------------\n";
		cout<<"\t\b\b\bGreat To Work With You Sir , GOODBEY\n";
		cout<<"----------------------------------------------\n";}
	return 0;}
