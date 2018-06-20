// Bai003.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.14159265

using namespace std;
void main()
{
	float d;
	cout<<"\nNhap Chu Vi: ";
	cin>>d;
	float r=(d/PI)/2;
	float s=r*r*PI;
	cout<<"\nDien Tich La: "<<s;
}

