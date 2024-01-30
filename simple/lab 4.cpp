#include<iostream>
using namespace std;
int main(void)
{
	float principal,rate,time;
	cout<<"please enter principal: \n";
	cin>>principal;
	cout<<"please enter rate: \n";
	cin>>rate;
	cout<<"please enter time: \n";
	cin>>time;
	cout<<"simple interest is : "<<(principal*rate*time)/100<<endl;
	return 0;
}