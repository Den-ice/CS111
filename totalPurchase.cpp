#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  const float tax = 0.07;
  float price1, price2, price3, price4, price5;
  price1 = 15.95;
  price2 = 24.95;
  price3 = 6.95;
  price4 = 12.95;
  price5 = 3.95;

  //Sum added here.
  float sum = price1 + price2 + price3 + price4 + price5;
  cout<<"the total price is: "<<setprecision(4) << sum << endl; 

  //Tax calculation.
  float s_tax = sum * tax;
  cout<<"The total sales tax is: "<< s_tax << endl;
  
  //Calculate and display total.
  float total = sum + s_tax;
  cout<<"The final total is: "<< total << endl;

}
