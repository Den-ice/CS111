#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
  char y,Y,N, n, c, ch;
  int num, odd, even;
  double avg, total; 

  odd = 0;
  even = 0;
  total = 0;

  cout << "\nDo you have a number to check? y or n: ";
  cin >> c;

  if (c=='n' || c=='N')
    {
      cout << "\nNo Numbers where checked\n\n";
    }
  else
    {
      while (c=='y'||c=='Y')
	{     
      	  cout << "Enter a number: ";
	  cin >> num;
	 
	  if (!(num%2==0))
	    {
	      cout << num << " is odd\n\n";
	      odd++;
	      total += num;
	    }
	  else 
	    {
	      cout << num << " is even \n\n";
	      total += num;
	      even++;
	    }
	  cout << "Do you have a number to check? y or n: ";
	  cin >> c;
	}

	cout << even << " even numbers\n"
	     << odd << " odd numbers\n";

	avg = total / (odd+even);
	
	cout << "The average is " << avg << endl << endl;
    }
  return 0;
}
