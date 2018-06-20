// Bai035.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

void main() 
{
	float a,b,c,d;
	cout<<"Nhap a:"<<endl;
	cin>>a;
	cout<<"Nhap b:"<<endl;
	cin>>b;
	cout<<"\nNhap c:"<<endl;
	cin>>c;
	cout<<"Nhap d:"<<endl;
	cin>>d;
	float s1=a*b/2;
	float s2=c*d/2;
	if(s1<=s2)
		cout<<"\nCo The Dat Tron Tam Giac Vuong Do Dai a,b Trong Tam Giac Vuong Do Dai c,d";
	else
		cout<<"\nKhong The Dat Tron Tam Giac Vuong Do Dai a,b Trong Tam Giac Vuong Do Dai c,d";
	cout<<endl;
}


