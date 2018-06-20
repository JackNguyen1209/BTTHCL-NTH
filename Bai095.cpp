// Bai095.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

void giatri();

void main()
{
	giatri();
	cout<<endl;
}

void giatri()
{
	for(int a=1;a<=100;a++)
		cout<<"\nVoi a="<<a<<" thi ket qua:"<<(float)(3*a+4)/(a*a-5*a-9);
}
