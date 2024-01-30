#include <iostream>
using namespace std;
int main(void)
{
  int number,price,total,amount;
  string food;
  cout<<"*Food Menu* \n1->Pasta(6$)\n2->Hamburger(7$)\n3->Pizza(10$)\n";
  cout<<"select which food type do you want to order(1-3): ";
  cin>>number;
  switch(number){
    case 1:
  	food="pasta";
  	price=6;
  	break;
  case 2:
  	food="hamburger";
  	price=7;
  	break;
  case 3:
  	food="pizza";
  	price=10;
  	break;	
  }

  cout<<"how many "<<food<<" would you like to order? :";
  cin>>amount;
  total=price*amount;
  cout<<"Total Pay = "<<total;
  
  return 0;
}