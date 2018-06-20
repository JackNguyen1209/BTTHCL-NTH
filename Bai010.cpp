// Bai010.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.14159265

using namespace std;
void main()
{
	int n;
	cout<<"\nNhap So Phan Tu: ";
	cin>>n;
	int a;
	cout<<"\nNhap Phan Tu Dau Tien: ";
	cin>>a;
	int d;
	cout<<"\nNhap Cong Sai: ";
	cin>>d;
	int s=0;
	for(int i=a;i<=n-1;i=i++)
		s=s+d;
	cout<<"\nKet Qua La: "<<s;
	cout<<endl;
}



