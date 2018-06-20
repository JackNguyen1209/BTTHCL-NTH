// Bai004.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.14159265

using namespace std;

void main()
{
	float x1,y1;
	cout<<"\nNhap Toa Do A:\nx1: ";
	cin>>x1;
	cout<<"y1:";
	cin>>y1;

	float x2,y2;
	cout<<"\nNhap Toa Do B:\nx2: ";
	cin>>x2;
	cout<<"y2:";
	cin>>y2;
	float kq=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	cout<<"\nKhoang Cach: "<<kq;
}


