// Bai096.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

void giatri();

void main()
{
	giatri();
	cout<<endl;
}
void giatri()
{
	for(float i=0.1;i<=5;i=i+0.1)
		cout<<"\nVoi x = "<<i<<" thi ket qua = "<<pow(i,5)-4*pow(i,4)+1.7*(i,2)-9.6;
}
