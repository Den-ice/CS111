//This program calculates a monthly sales tax report, then lists the sales and amount of taxes for the month.
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()

{

  string m;
  double tst, sst, cst, s, tc, ss_t, cs_t;

  ss_t = 0.04;
  cs_t = 0.02;

  //Ask for month and total collected for that month
  cout<< "Enter month: ";
  getline(cin,m);
  cout << endl;
  cout << "Enter total collected: ";
  cin >> tc;
  cout << endl;

  //Calculations
  s = tc /(1 + ss_t + cs_t);
  cst = cs_t * tc;
  sst = ss_t * tc;
  tst = cst + sst;

  //Display report
  cout << "Month:  " << m << endl<<endl;
  cout << "--------------------" << endl;
  cout << fixed << setprecision(2);
  cout << left << setw(26) << "Total Collected:" << "$" << right << setw(10) << tc << endl;
  cout << left << setw(26) << "Sales:" << "$" << right << setw(10) << s << endl;
  cout << left << setw(26) << "County Sales Tax:" << "$" << right << setw(10) << cst << endl;
  cout << left << setw(26) << "State Sales Tax:" << "$" << right << setw(10) << sst << endl;
  cout << left << setw(26) << "Total Sales Tax:" << "$" << right << setw(10) << tst << endl;

}
