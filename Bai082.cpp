// Bai082.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

float Tong( );
void main()
{
	cout<<"Ket Qua: "<<Tong();
	cout<<endl;
}

float Tong()
{
	float s=0;
	for(int i=103;i>=1;i=i-2)
		s=1/(i+s);
	return s;
}