// Bai032.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

void main() 
{
	float a,b,c,d,s,t,u;
	cout<<"Nhap a:"<<endl;
	cin>>a;
	cout<<"Nhap b:"<<endl;
	cin>>b;

	cout<<"Nhap c:"<<endl;
	cin>>c;
	cout<<"Nhap d:"<<endl;
	cin>>d;

	cout<<"Nhap s:"<<endl;
	cin>>s;
	cout<<"Nhap t:"<<endl;
	cin>>t;
	cout<<"Nhap u:"<<endl;
	cin>>u;

	if((a*s+t*b+u)*(c*s+t*d+u)!=0 )
	{
		if((a*s+t*b+u)*(c*s+t*d+u)>0 )
			cout<<"\nCung Nam Tren 1 Phan Mat Phang";
		else
			cout<<"\nKhong Cung Nam Tren 1 Phan Mat Phang";
	}
	else
		cout<<"\nNhap Sai";
	cout<<endl;
}
