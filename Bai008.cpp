// Bai008.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.14159265

using namespace std;

float KhoangCach(float,float,float,float);
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

	float x3,y3;
	cout<<"\nNhap Toa Do C:\nx3: ";
	cin>>x3;
	cout<<"y3:";
	cin>>y3;
	float c=KhoangCach(x1,y1,x2,y2);
	float b=KhoangCach(x1,y1,x3,y3);
	float a=KhoangCach(x2,y2,x3,y3);
	float p=(a+b+c)/2;
	float P=a+b+c;
	float s=sqrt(p*(p-a)*(p-b)*(p-c));

	if(a+b>c && a+c>b && b+c>a)
	{
		cout<<"\nDien Tich La:"<<s;
		cout<<"\nChu Vi La: "<<P;

		cout<<"\nKet Thuc"<<endl;

	}
	else
		cout<<"\nKhong Thoa"<<endl;
}

float KhoangCach(float x1,float y1,float x2,float y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
