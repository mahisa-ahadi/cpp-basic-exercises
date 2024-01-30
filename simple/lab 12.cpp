#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter first number:"<<endl;
	cin>>x;
	cout<<"enter second number: "<<endl;
	cin>>y;
	if (x<y)
	 cout<<y<<" is the greatest number";
	else
	 cout<<x<<" is the greatest number";
	return 0;
}