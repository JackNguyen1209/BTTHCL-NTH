// Bai056.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int Timn(float );
void main()
{
	float a;
	cout<<"Nhap a:";
	cin>>a;
	int kq=Timn(a);
	cout<<"\nSo Tu Nhien Thoa Dieu Kien: "<<kq;
	cout<<endl;

}

int Timn(float a)
{
	float s=0;
	for(int i=1;;i++)
	{
		s=s+(float)1/i;
		if(s>a)
			return i;
	}
}

