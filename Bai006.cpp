// Bai006.cpp : Defines the entry point for the console application.
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
	float c;
	cout<<"\nNhap c:";
	cin>>c;
	if(a+b>c && a+c>b && b+c>a)
	{
		float cosa=(a*a-b*b-c*c)/(-2*b*c);
		float cosb=(b*b-a*a-c*c)/(-2*a*c);
		float cosc=(c*c-a*a-b*b)/(-2*a*b);
		cout<<"\nGoc a: "<<acos(cosa)*180/PI;
		cout<<"\nGoc b: "<<acos(cosb)*180/PI;
		cout<<"\nGoc c: "<<acos(cosc)*180/PI;
		cout<<endl;

	}
	else
		cout<<"\nKhong Thoa";

}