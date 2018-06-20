// Bai028.cpp : Defines the entry point for the console application.
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
	float z;

	cout<<"Nhap x:";
	cin>>x;
	cout<<"\nNhap y:";
	cin>>y;
	cout<<"\nNhap z:";
	cin>>z;
	
	if(x+y>z && y+z>x && z+x>y)
	{
		if(x*x+y*y==z*z||x*x==y*y+z*z||x*x==y*y+z*z)
			cout<<"\nTam Giac Vuong";
		else
		{
			if(x*x+y*y<z*z||x*x>y*y+z*z||x*x>y*y+z*z)
				cout<<"\nTam Giac Tu";
			else
				cout<<"\nTam Giac Nhon";
		}
	}
	else
	{
		cout<<"\nKhong Phai La Tam Giac";
	}
	cout<<endl;
}

