// Bai053.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

#define PI 3.14159265359

void main()
{
	double t=1;
	double s;
	for(double i=0.1;i<=10;i=i+0.1)
	{
		s=(double)1+sin(i*PI/180);
		t=t*(double)s;
	}
	cout<<"\nKet Qua La: "<<t;
	cout<<endl<<endl<<endl<<endl;
}
