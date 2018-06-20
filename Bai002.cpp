// Bai002.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.14159265

using namespace std;

void main()
{
	float a;
	float b;
	cout<<"\nNhap Canh Huyen: ";
	cin>>a;
	cout<<"\nNhap Canh Goc Vuong Be Hon Canh Huyen: ";
	cin>>b;
	float c=sqrt(a*a-b*b);
	float p=(a+b+c)/2;
	float S=sqrt(p*(p-a)*(p-b)*(p-c));
	float kq=S/p;
	cout<<"\nBan Kinh La:"<<kq;
}

