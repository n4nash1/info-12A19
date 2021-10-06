// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <conio.h>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <Windows.h>
#include "Header.h"
#include <iostream>
#include <iomanip>
using namespace std;
int i = 0;
string test;
void stt() {
	static int stt_id = 1; 
	for (; stt_id <= 49; stt_id++) //liet ke so thu tu
	{ 
		cout << "[" << stt_id << "]" << endl;
		Sleep(10);
	}
}

int main() {
	stt();
	bool intEntered = false;
	char input[255];
	int nhapstt;

	cout << "\tSo Thanh Vien 12A19" << endl;

x: if (i == 6) {
	cout << "\n6. MAX" << endl;
		Sleep(2000);
		system("cls");
		return 0;
	}
	
	stt();

	do {
	   a: // truong hop nhap chu~
		cout << "\nNhap STT: ";
		cin >> input;
		string s = input;
		nhapstt = atoi(s.c_str()); // ham atoi se 
		if (nhapstt == 0)
		{
			cout << setw(30) << "\tNULL!!!\t" << endl;
			cout << "\t------------------------------" << endl;
		}
		else intEntered = true;

	} while (!intEntered);

	// xet so TT
	if (nhapstt > 49 || nhapstt < 0) {
		cout << setw(30) << "\tChi co 49 STT" << endl;
		cout << "\t-------------------------" << endl;
	}

	 switch (nhapstt) {
	 case 01: {
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt1();
		 break;
	 }
	 case 02: 
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt2();
		 break; 
	 case 03:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 i++;
		 stt3();
	 case 04:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt4();
		 break;
	 case 05:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt5();
		 break;
	 case 06:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt6();
		 break;
	 case 07:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt7();
		 break;
	 case 8:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt8();
		 break;
	 case 9:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt9();
		 break;
	 case 10:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt10();
		 break;
	 case 11:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt11();
		 break;
	 case 12:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt12();
		 break;
	 case 13:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt13();
		 break;
	 case 14:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt14();
		 break;
	 case 15:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt15();
		 break;
	 case 16:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt16();
		 break;
	 case 17:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt17();
		 break;
	 case 18:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt18();
		 break;
	 case 19:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt19();
		 break;
	 case 20:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt20();
		 break;
	 case 21:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt21();
		 break;
	 case 22:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt22();
		 break;
	 case 23:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt23();
		 break;
	 case 24:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt24();
		 break;
	 case 25:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt25();
		 break;
	 case 26:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt26();
		 break;
	 case 27:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt27();
		 break;
	 case 28:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt28();
		 break; 

	 case 29:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt29();
		 break;

	 case 30:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt30();
		 break;

	 case 31:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt31();
		 break;

	 case 32:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt32();
		 break;

	 case 33:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt33();
		 break;

	 case 34:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt34();
		 break;

	 case 35:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt35();
		 break;

	 case 37:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt37();
		 break;

	 case 38:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt38();
		 break;

	 case 39:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt39();
		 break;

	 case 40:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt40();
		 break;

	 case 41:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt41();
		 break;
	 case 42:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt42();
		 break;
	 case 43:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt43();
		 break;

	 case 44:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt44();
		 break;

	 case 45:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt45();
		 break;

	 case 46:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt46();
		 break;
	 case 47:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt47();
		 break;
	 case 48:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt48();
		 break;

	 case 49:
		 loadsleep();
		 cout << "\nSTT: " << "[" << nhapstt << "]" << endl;
		 stt49();
		 break;
	 } i++;
	 goto x;
	


	system("pause");
	return 0;
}