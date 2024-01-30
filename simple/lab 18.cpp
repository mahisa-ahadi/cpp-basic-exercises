#include<iostream>
using namespace std;
int main()
{
	int operand1,operand2;
    string operatorr;
	cout<<"enter operand1: ";
	cin>>operand1;
	cout<<"enter the operator: ";
	cin>>operatorr;
	cout<<"enter operand2: ";
	cin>>operand2;
	if (operatorr=="+")
	 cout<<"result of "<<operand1<<"+"<<operand2<<"is "<<operand1+operand2;
	if (operatorr=="-")
	 cout<<"result of "<<operand1<<"-"<<operand2<<"is "<<operand1-operand2;
	if (operatorr=="/")
	 cout<<"result of "<<operand1<<"/"<<operand2<<"is "<<operand1/operand2;
	if (operatorr=="*")
	 cout<<"result of "<<operand1<<"*"<<operand2<<"is "<<operand1*operand2;
	if (operatorr=="%")
	 cout<<"result of "<<operand1<<"%"<<operand2<<"is "<<operand1%operand2;
	 
	return 0;
	
	
	
}