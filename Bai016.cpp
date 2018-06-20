// Bai016.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void main()
{
	float x;
	float y;
	cout<<"Nhap x:";
	cin>>x;
	cout<<"\nNhap y:";
	cin>>y;
	if(x>y)
	{
		cout<<"\nMax("<<x<<","<<y<<") :"<<x;
		cout<<"\nMin("<<x<<","<<y<<") :"<<y;
	}
	else
	{
		cout<<"\nMax("<<x<<","<<y<<") :"<<y;
		cout<<"\nMin("<<x<<","<<y<<") :"<<x;
	}

	cout<<endl;
}

