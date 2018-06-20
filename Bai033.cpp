// Bai033.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
int ktkhongdiqua(float,float,float,float,float,float,float,float);
void main() 
{
	float a,b,c,d,e,f,g,h;
	//A
	cout<<"A";
	cout<<"\nNhap a:"<<endl;
	cin>>a;
	cout<<"Nhap b:"<<endl;
	cin>>b;
	//B
	cout<<"B";
	cout<<"\nNhap c:"<<endl;
	cin>>c;
	cout<<"Nhap d:"<<endl;
	cin>>d;
	//C
	cout<<"\nC";
	cout<<"\nNhap e:"<<endl;
	cin>>e;
	cout<<"Nhap f:"<<endl;
	cin>>f;
	//D
	cout<<"\nD";
	cout<<"\nNhap g:"<<endl;
	cin>>g;
	cout<<"Nhap h:"<<endl;
	cin>>h;
	if(ktkhongdiqua(a,b,c,d,e,f,g,h)==1)
	{
		if(((f-h)*a+(g-e)*b-(f-h)*e-(g-e)*f)*((f-h)*c+(g-e)*d-(f-h)*e-(g-e)*f)>0)
			cout<<"A va B cung nam tren 1 mat phang";
		else
			cout<<"A va B khong cung nam tren 1 mat phang";
	}
	else
		cout<<"A va B 1 trong 2 diem thuoc (CD)";
	cout<<endl;
}


int ktkhongdiqua(float a,float b,float c,float d,float e,float f,float g,float h)
{
	int flag=1;
	if((f-h)*(a-e)+(g-e)*(b-f)==0 || (f-h)*(c-e)+(g-e)*(d-f)==0)
		flag=0;
	return flag;
}