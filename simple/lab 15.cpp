#include <iostream>
using namespace std;
int main(void)
{
	int number;
	cout<<"pls enter the day of the week (1-7): ";
	cin>>number;
	switch(number)
	{
		case 1:
			cout<<"monday\n";
			break;
		case 2:
			cout<<"tuesday\n";
			break;
		case 3:
			cout<<"wednesday\n";
			break;
		case 4:
			cout<<"thirsday\n";
			break;
		case 5:
			cout<<"friday\n";
			break;	
		case 6:
			cout<<"saturday\n";
			break;
		case 7:
			cout<<"sunday\n";
			break;				
	}
	return 0;
	
}