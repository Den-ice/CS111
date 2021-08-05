//This is a program to calculate a theater's gross and netbox office profit for a night
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{

  string movie;
  int n_a, n_c;
  double ADT, CT, rate, GBOP, NBOP, APD;

  rate = 0.20;
  ADT = 10.00;
  CT = 6.00;

  //Ask for movie title and amount of adult and child tickets
  cout<< "Enter movie name: ";
  getline(cin,movie);
  cout<< "Enter amount of adult and child tickts sold: ";
  cin>> n_a>>n_c;
  cout<< endl;
 
  //Calculations
  GBOP = (n_a * 10.00)+ (n_c * 6.00);
  NBOP = rate * GBOP;
  APD = GBOP - NBOP;

  //Display report
  cout<< left << setw(35) << "Movie Name:" << setw(4) << right << "\"" << movie << "\"" << endl;
  cout<< left << setw(38) << "Adult Tickets Sold:" << setw(6) << right<<  n_a << endl;
  cout<< left << setw(38) << "Child Tickets Sold:" << setw(6) << right<<  n_c << endl;
  cout<< fixed << setprecision(2);
  cout<< left << setw(38) << "Gross Box Office Profit:" << "$" << right << setw(8) << GBOP << endl;
  cout<< left << setw(38) << "Net Box Office Profit:" << "$" << right << setw(8) << NBOP << endl;
  cout<< left << setw(38) << "Amount Paid to Distributor:" << "$" << right << setw (8) << APD << endl;

}
