// Bai051.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

void main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	//Cau a
	int kq=pow(2.0,n);
	cout<<"\nKet Qua Cau a: "<<kq<<endl;
	//Cau b
	long t=1;
	for(int i=1;i<=n;i++)
		t*=i;
	cout<<"\nKet Qua Cau b:"<<t<<endl;
	//Cau c
	int mau;
	float tich=1.0;
	float ps;
	for(int i=1;i<=n;i++)
	{
		mau=i*i;
		ps=(float)1/mau;
		tich=tich*(float)(1+ps);
	}
	cout<<"\nKet Qua Cau c: "<<tich<<endl;
	//Cau d
	float can=0;
	for(int i=1;i<=n;i++)
	{
		can=sqrt(can+2);
	}
	cout<<"\nKet Qua Cau d: "<<can<<endl;
}

