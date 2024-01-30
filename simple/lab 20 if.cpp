#include<iostream>
using namespace std;
int main (void)
{
	int number,amount;
	cout<<"*Food Menu*\n 1- Pasta (6$) \n 2-Hamburger(7$) \n 3-Pizza(10$)\n";
	cout<<"Select which food type you want to order (1-3):\n";
	cin>>number;
	if (number==1)
	{
	  cout<<"How many pastas do you like to order? :";
	  cin>>amount;
	  cout<<"Total pay = "<<amount*6<<"$";
		
	}
	if (number==2)
	{
	  cout<<"How many hamburgers do you like to order? :";
	  cin>>amount;
	  cout<<"Total pay = "<<amount*7<<"$";
		
	}
		if (number==1)
	{
	  cout<<"How many pizza do you like to order? :";
	  cin>>amount;
	  cout<<"Total pay = "<<amount*10<<"$";
		
	}
	return 0;
	

}