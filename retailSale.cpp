#include <iostream>
using namespace std;

int main ()
{
  double rate, price,totalsale, pay ;
  //Get the retail price.
  cout<< "What is the retail price of the item?";
  cin >> price;

  //Get the sales tax on the item.
  cout<< "what is the sales tax rate of the item?";
  cin >> rate;
  //Calculate the total sale.
  totalsale = price * rate;
  //Display sales taxe and total sale.
  cout<< "The sales tax is" << totalsale << endl;
  cout<< "the totalprice is" << totalsale + price<< endl; 

  return 0;
}
