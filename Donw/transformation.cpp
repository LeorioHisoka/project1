#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double kelvin,fahrenheit,centigrade,temperature;
	bool go=true;
	char systemd,systemb,yn;
	cout<<"oh, Hello sir,";
	cout<<"\n----------------------------------------------\n";
	cout<<"----------------------------------------------\n";
	cout<<"\nI am a computer Program called OBA,";
	cout<<"\ncreated to do transformation between temperature units\n----------------------------------------------\n";
	cout<<" \nLet\'s begin to see What I can do for you";
	cout<<"\n----------------------------------------------\n";
	cout<<"----------------------------------------------\n";
	do{
		cout<<"what is the temperature in your city?: ";
		cin >>temperature;
		cout << "kelvin \t\'k\',\t\tfahrenheit\t\'f\',\t\tcentigrade\t\'c\'\n";
		cout <<"what scale system and unit of measurement for temperature fo you typed in ? : ";
		cin >>systemd;
		if (systemd == 'k'){
            cout << "fahrenheit\t\'f\',\t\tcentigrade\t\'c\'\n";
            cout <<"what system do you want you transform to ?: ";
            cin >>systemb;
			switch(systemb){
				case 'c':
						centigrade=(temperature-273.15);
						cout <<"\n\ntemperature in centigrade is : "<<centigrade<<endl;
					break;
				case 'f':
						fahrenheit=1.8*temperature-459.4;
						cout <<"\n\ntemperature in fahrenheit is : "<<fahrenheit<<endl;
					break;
                default:
					cout << "error"<<endl;
            }}
		else if (systemd == 'f'){
            cout << "kelvin \t\'k\',,\t\tcentigrade\t\'c\'\n";
            cout <<"what system do you want you transform to ?: ";
            cin >>systemb;
			switch(systemb){
				case 'c':
						centigrade=((temperature-33)/1.8);
						cout <<"\n\ntemperature in centigrade is : "<<centigrade<<endl;
					break;
				case 'k':
						kelvin=((temperature+459.4)/1.8);
						cout <<"\n\ntemperature in kelvin is : "<<kelvin<<endl;
					break;
                default:
					cout << "error"<<endl;
            }}
		else if (systemd == 'c'){
            cout << "kelvin \t\'k\',\t\tfahrenheit\t\'f\',\n";
            cout <<"what system do you want you transform to ?: ";
            cin >>systemb;
			switch(systemb){
				case 'f':
						fahrenheit=(((1.8)*(temperature))+32);
						cout <<"\n\ntemperature in fahrenheit is : "<<fahrenheit<<endl;
					break;
				case 'k':
						kelvin=temperature+273.15;
						cout <<"\n\ntemperature in kelvin is : "<<kelvin<<endl;
					break;
                default:
					cout << "error"<<endl;
            }}
		else {
			cout << "error"<<endl;
		}
			cout<<"\n----------------------------------------------\n";
			cout<<"\n----------------------------------------------\n";
			cout <<"\n\'y\' For yes\t\'n\' Fot no"<<endl;
			cout <<"do you want a new transformation between temperature units ?: ";
			cin >> yn ;
			if(yn=='n')
			break;
	}while(go==true);}
