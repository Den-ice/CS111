#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
  string item;
  double price, stax, rate,total;

  rate = 0.08;

  //Display item.;
  cout << "Enter the item: ";
  getline(cin,item) ;

    //Display price.;
  cout << "Enter the price: ";
  cin>> price;

  //Calculate Sales tax and total.;
  stax =  price * rate;
  total = price + stax;
  //Display name of store.;
  cout << "\n\"Macy's\"" << endl<<endl;
  cout << fixed << setprecision(2);
  cout << left <<setw(20)<< item <<"|"<<right <<setw(10)<< price<< endl;
  cout<< setw(21)<<"|"<<setw(10)<<endl;
  cout << left <<setw(20)<<"Sales tax" <<"|"<<right << setw(10)<<stax<<endl;
  cout<< setw(21)<<"|"<<setw(10)<<endl;
  cout<< left <<setw(20)<< "Total" << "|" << right << setw(10)<< total<<endl<<endl;
  
  return 0;
}

  
