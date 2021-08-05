#include <iostream>

using namespace std;

int main()
{
  int q;
  double up, t=0.12, st, sb, ts;
  
do
  {

    cout <<"\nEnter an item quantity and unit price: ";
    cin >> q >> up;
    
    if ((q>=1 && q<=25) && up>0)
      {
	ts = q*up;
	cout << "Total sale for this item is " << ts;
	sb += ts;
      }
    else 
      {
	cout << "Error: This item is not valid. Quantity must be in range 1-25.";
      }
    
  }while (q != -99);
  
  cout << "\n\nSubtotal: " << sb 
       << "\nSales Tax: " << sb*t
       << "\nTotal: " << sb + (sb*t) << endl << endl;
}
