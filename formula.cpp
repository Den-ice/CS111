#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
  int ch, max;
  double sum, count;

   
	cout << "Enter a positive integer: ";
	cin >> max;
	
	if (max>0)
	  {
	    sum = 0; count = 0;
	    for (int n=1; n<=max; n++)
	      {
		sum += (n * pow(5,(max-count)));
		count++;	      
	      }
	  }
	else 
	  {
	    cout << "Enter a positive integer: ";
	  }
	cout << endl << sum << endl;

	
	cout << "Enter a positive integer: ";
	cin >> max;
	
        if (max>0)
          {
            sum = 0; count = 0;
            for (int n=1; n<=max; n++)
              {
		n *= n;              
		sum += (n * pow(5,max-count));
                count++;
              }
          }
        else
          {
            cout << "Enter a positive integer: ";
          }
        cout << endl << sum << endl;
}
