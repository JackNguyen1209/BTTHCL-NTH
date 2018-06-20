// Bai018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int kt(float ,float ,float);
void main()
{
	float a;
	float b;
	float c;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"\nNhap b:";
	cin>>b;
	cout<<"\nNhap c:";
	cin>>c;
	if(kt(a,b,c)==1)
		cout<<"\nThoa Dieu Kien : a<b<c :";
	else
		cout<<"\nKhong Thoa Dieu Kien";

	cout<<endl;
}

int kt(float x,float y,float z)
{
	if(x<y && y<z && x<z)
		return 1;
	else
		return 0;
}