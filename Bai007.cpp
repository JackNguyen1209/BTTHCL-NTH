// Bai007.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.14159265

using namespace std;
void main()
{
	float a;
	cout<<"\nNhap a: ";
	cin>>a;
	float b;
	cout<<"\nNhap b: ";
	cin>>b;
	float c;
	cout<<"\nNhap c:";
	cin>>c;
	if(a+b>c && a+c>b && b+c>a)
	{
		float cosa=(a*a-b*b-c*c)/(-2*b*c);
		float cosb=(b*b-a*a-c*c)/(-2*a*c);
		float cosc=(c*c-a*a-b*b)/(-2*a*b);
		float A=acos(cosa);
		float B=acos(cosb);
		float C=acos(cosc);
		cout<<"\nDuong Cao ha:"<<sin(B)*c;
		cout<<"\nDuong Cao hb:"<<sin(C)*a;
		cout<<"\nDuong Cao hc:"<<sin(A)*b;
		cout<<endl;
		
		cout<<"\nDuong Trung Tuyen ma: "<<(b*b+c*c)/2 - a*a/4;
		cout<<"\nDuong Trung Tuyen mb: "<<(a*a+c*c)/2 - b*b/4;
		cout<<"\nDuong Trung Tuyen mc: "<<(b*b+a*a)/2 - c*c/4;
		cout<<endl;

		cout<<"\nDuong Phan Giac Trong pa: "<<(2*b*c*cos(A/2))/(b+c);
		cout<<"\nDuong Phan Giac Trong pb: "<<(2*a*c*cos(B/2))/(a+c);
		cout<<"\nDuong Phan Giac Trong pc: "<<(2*b*a*cos(C/2))/(b+a);
		cout<<endl;

		float p=(a+b+c)/2;
		cout<<"\nBan Kinh Duong Tron Noi Tiep: "<<sqrt((p-a)*(p-b)*(p-c)/p);
		cout<<endl;
		
		float s=sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<"\nBan Kinh Duong Tron Ngoai Tiep: "<<a*b*c/(4*s);
		cout<<endl;

		cout<<"\nKet Thuc"<<endl;

	}
	else
		cout<<"\nKhong Thoa"<<endl;
}

