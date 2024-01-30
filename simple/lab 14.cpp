#include<iostream>
using namespace std;
int main(void)
{
	float number,total;
	cout<<"enter the number of toys you want to buy: ";
	cin>>number;
	total=20*number;
	if (total>100){ 
	  total=total*0.9;
	  cout<<"Discount! Total price is : "<<total;
	}
	else
	  cout<<total;
	return 0;
	 
}