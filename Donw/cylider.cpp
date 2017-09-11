#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;
const float pi =3.14159265359;

float xdiameter(float ndiameter){   //استخراج نصف القطر من القطر كامل
	float Qanoon;
	Qanoon = (ndiameter / 2); //الدالة سليمة
	return Qanoon;}
 //العائد هو نصف القطر

float diameter(float Nradius){   //حساب القطر كامل من نصف القطر
	float Qanoon;
	Qanoon = (Nradius * 2); //الدالة سليمة
	return Qanoon;}          //العائد هو القطر

float area(float Nradius,float nheight){   // حساب المساحة انطلاقا من نصف القطر والارتفاع
	float Qanoon;//مساحة القاعدة الدائرية
	Qanoon = (2* pi * Nradius*Nradius+2*pi*Nradius*nheight);// areaOfcylinder
	return Qanoon;}
 //الدالة سليمة
float Volume(float Nradius,float nheight){
	float Qanoon;
	Qanoon = (Nradius*Nradius*nheight*pi); // volumeOfcylinder
	return Qanoon;}
int main()
{
	float radiusv, diameterv,heightv, surroundingv, areav, volumev;
	char answer1, answer2;bool wa=true;
	string answer3;
	cout<<"oh, Hello sir,";
	cout<<"\n----------------------------------------------\n";
	cout<<"----------------------------------------------\n";
	cout<<"\nI am a computer Program called OBA,";
	cout<<"\ncreated to calculate The FullArea ,The AreaOfTheBase,and Volume of The cylinder\n----------------------------------------------\n";
	cout<<" \nLet\'s begin to see What I can do for you";
	cout<<"\n----------------------------------------------\n";
	cout<<"----------------------------------------------\n";
	while (wa==true){
		cout<<"\nSo What Do We want to calculate \n\"FullArea Volume Or AreaOfTheBase\"?\n";
		cout<<"\n\'a\' For WholeArea  \t\'v\' For Volume \n\'x\' To  Exit\nWhich Of these do you need to calculate : ";
		cin>>answer1;
		cout<<"----------------------------------------------\n";
			if (answer1 == 'a') {
					cout<<"\nI Need Two Data \" Radius OR Diameter\"And The \"Height\"\n\"The Radius\" \t\'r\'\n\"The Diameter\" \t\'d\'";
					cout<<"\nWhat Do you have From those : ";
					cin>>answer2;

						switch (answer2) {

						case 'r': // it is done
							cout<<"please enter the Value Of Radius : ";
							cin>>radiusv;
							cout<<"please enter the Value Of Height : ";
							cin >> heightv;
							cout<<"The Value of Area Of The cylinder is : " <<area(radiusv,heightv)
								 <<endl;
							break;//fine

						case 'd': // it is done
							cout<<"please enter the Value Of Diameter : ";
							cin>>diameterv;
								cout<<"please enter the Value Of Height : ";
							cin>>heightv;
							radiusv = xdiameter(diameterv);
							cout<<"The Value of Area Of The cylinder is : " <<area(radiusv,heightv)
								 <<endl;
							break;

						default:
							cout<<"Worng typing, please type again\n";
						}

			} else if (answer1 == 'v') {
					cout<<"\n\"The Radius\" \t\'r\'\n\"The "
						 "Diameter\" \t\'d\'";
					cout<<"\nWhat Do you have From those : ";
					cin>>answer2;
					switch (answer2) {

						case 'r':
							cout<<"please enter the Value Of Radius : ";
							cin>>radiusv;
							cout<<"please enter the Value Of heightv : ";
							cin>>heightv;
							cout<<"The Value of Volume Of The cylinder is : " <<Volume(radiusv,heightv)
							 <<endl;
							break;

						case 'd'://it is done
							cout<<"please enter the Value Of Diameter : ";
							cin>>diameterv;
							cout<<"please enter the Value Of Height : ";
							cin >> heightv;
							radiusv=xdiameter(diameterv);
							cout<<"The Value of Volume Of The cylinder is : " <<Volume(radiusv,heightv)<<endl;
							break;

						default:
							cout<<"Worng typing, please type again\n";
						}
			}
			else if (answer1 == 'x') {
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
