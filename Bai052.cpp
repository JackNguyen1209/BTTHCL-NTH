// Bai052.cpp : Defines the entry point for the console application.
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
	float a;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"\nNhap n:";
	cin>>n;
	 
	//Cau a
	float t=a;
	if(n==0)
		t=1;
	else
		for(int i=1;i<=n;i++)
			t=pow(a,i);
	cout<<"\nKet qua cau a: "<<t;
	cout<<endl;
	//Cau b
	float tich=1;
	for(int i=0;i<=n-1;i++)
		tich=tich*(a+i);
	cout<<"\nKet qua cau b: "<<tich;
	cout<<endl;

	//Cau c
	float s=(float)1/a;
	float ps;
	float mau=a;
	for(int i=1;i<=n;i++)
	{
		mau=mau*(a+i);
		ps=(float)1/mau;
		s=s+ps;
	}
	cout<<"\nKet qua cau c: "<<s;
	cout<<endl;
}
