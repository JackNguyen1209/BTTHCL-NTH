// Bai030.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

void main() 
{
	cout<<"Giai:\n{a1x+b1y+c1=0\n{a2x+b2y+c2=0";
	float a1,a2,b1,b2,c1,c2;
	cout<<"\nNhap a1:"<<endl;
	cin>>a1;
	cout<<"Nhap b1:"<<endl;
	cin>>b1;
	cout<<"Nhap c1:"<<endl;
	cin>>c1;
	cout<<"\nNhap a2:"<<endl;
	cin>>a2;
	cout<<"Nhap b2:"<<endl;
	cin>>b2;
	cout<<"Nhap c2:"<<endl;
	cin>>c2;
	float D=a1*b2-a2*b1;
	float Dx=-c1*b2+c2*b1;
	float Dy=-a1*c2+a2*c1;
	if(D!=0)
	{
		float x=Dx/D;
		cout<<"\nx :"<<x;
		float y=Dy/D;
		cout<<"\ny :"<<y;
	}
	else
	{
		if(D==0 &&(Dx!=0 || Dy!=0))
			cout<<"\nVo Nghiem";
		else
			if(D==0 && Dx==0 && Dy==0)
				cout<<"\nVo So Nghiem";
	}
	cout<<endl;
}


