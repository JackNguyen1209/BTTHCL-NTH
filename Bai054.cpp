// Bai054.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
float Tong(int,float,float);

void main()
{
	int n;
	float a;
	float x;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"\nNhap x:";
	cin>>x;
	cout<<"\nNhap n:";
	cin>>n;
	cout<<"\nKet Qua:"<<Tong(n,a,x);
	cout<<"\nKet Thuc";
}

float Tong(int n,float a,float x)
{
	float s=(x+a)*(x+a);
	for(int i=2;i<=n;i++)
	{
		s=(s+a*a);
	}
	return s+a;

}