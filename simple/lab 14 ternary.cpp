#include<iostream>
using namespace std;
int main (void)
{
	float number,total;
	cout<<"enter the number of toys you want: ";
	cin>>number;
	total=20*number;
	total>100? (total=0.9*total) : (total=total);
	cout<<total;
	return 0; 
	
}