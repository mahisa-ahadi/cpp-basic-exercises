#include<iostream>
using namespace std;
int main(void)
{
   int cost,price,total;
   cout<<"Enter the cost of the product: "<<endl;
   cin>>cost;
   cout<<"Enter the price of the product: "<<endl;
   cin>>price;
   total=price-cost;
   (total>0) ? cout<<"profit": cout<<"loss";
   return 0;
}