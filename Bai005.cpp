// Bai005.cpp : Defines the entry point for the console application.
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
	cout<<"\nNhap a: ";
	cin>>a;
	float b;
	cout<<"\nNhap b: ";
	cin>>b;
	float A;
	cout<<"\nNhap ALPHA:";
	cin>>A;
	float h=tan(A*PI/180)*((b-a)/2);
	float s=(a+b)*h/2;
	cout<<"\nDien Tich: "<<s;

}



