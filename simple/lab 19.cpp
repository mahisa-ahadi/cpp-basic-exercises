#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age: ";
	cin>>age;
	(age>75) ? cout<<"you are really old dude ":((age>=50) ? cout<<"don't worry you are not that old": cout<<"you are young");
	return 0;
}