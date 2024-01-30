#include<iostream>
using namespace std;
int main()
{
	int cost,price,total;
	cout<<"enter the cost of the product: \t";
	cin>>cost;
	cout<<"enter the price of the product: \t";
	cin>>price;
	total=price-cost;
	if(total>0)
	 cout<<"profit";
	else
	 cout<<"loss";
	return 0;
}