#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b,p;
	cout<<"Enter 1st positive number"<<endl;
	cin>>a;
	cout<<"Enter 2nd positive number"<<endl;
	cin>>b;
	p=a*b;
	cout<<"Geometric mean is "<<sqrt(p);
	return 0;
}
