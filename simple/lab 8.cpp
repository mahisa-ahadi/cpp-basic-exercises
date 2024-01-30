#include<iostream>
using namespace std;
int main()
{
	float firstAngle,secondAngle;
	cout<<"please enter the value of angle 1: "<<endl;
	cin>>firstAngle;
	cout<<"please enter the value of angle 2:"<<endl;
	cin>>secondAngle;
	cout<<"Third angle is "<<180-(firstAngle+secondAngle);
	return 0;
}
