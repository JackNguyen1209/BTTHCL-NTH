// Bai036.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

void main() 
{
	float a,b,c,x,y;
	cout<<"Nhap a:"<<endl;
	cin>>a;
	cout<<"Nhap b:"<<endl;
	cin>>b;
	cout<<"Nhap c:"<<endl;
	cin>>c;
	cout<<"Nhap x:"<<endl;
	cin>>x;
	cout<<"Nhap y:"<<endl;
	cin>>y;
	if((a<=x && b<=y) || (a<=y && b<=x) || (a<=x && c<=y) || (a<=y && c<=x) ||(b<=x && c<=y) || (b<=y && c<=x))
		cout<<"\nLot Vua";
	else
		cout<<"\nKhong Lot Vua";
	cout<<endl;
}

