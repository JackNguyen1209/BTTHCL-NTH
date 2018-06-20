// Bai001.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.14159265

using namespace std;

void main()
{
	int n;
	float R;
	cout<<"\nNhap n: ";
	cin>>n;
	cout<<"\nNhap R: ";
	cin>>R;
	float a;
	a= sin((2*PI/n)/2)*R*2*n; 
	cout<<"\nChu Vi Da Giac: "<<a<<endl;
}

