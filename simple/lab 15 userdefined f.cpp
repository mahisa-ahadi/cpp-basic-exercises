#include<iostream>
using namespace std;
void Weekdays(int day)
{
	switch(day)
	{
	case 1:
		cout<<"monday";
		break;
	case 2:
	    cout<<"tuesday";
		break;
	case 3:
	    cout<<"wednesday";
		break;
	case 4:
		cout<<"thursday";
		break;
	case 5:
		cout<<"friday";
		break;
	case 6:
		cout<<"saturday";
		break;
	case 7:
		cout<<"sunday";
		break;		
	}
		
};
int main (void)
{
	int day;
	cout<<"enter the day of the week (1-7): ";
	cin>>day;
	Weekdays(day);
}