#include <iostream>
using namespace std;
int main()
{
	float x,y,z,sum;
	cout<<"enter angle 1: "<<endl;
	cin>>x;
	cout<<"enter angle 2: "<<endl;
	cin>>y;
	cout<<"enter angle 3: "<<endl;
	cin>>z;
	sum=x+y+z;
	cout<<"sum: "<<sum<<endl;
    sum==180 ? cout<<"it is a triangle" : cout<<"it is not a triangle";
    
	return 0;
}