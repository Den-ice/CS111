#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main ()
{
  int length =1, num, d=num, mod;
  cout << "\nEnter number: ";
  cin >> num;
  while ((d /=10) && d !=0)
    {
      length++;
    }

  cout << "Output: ";
  for (int n=length; n>=1;n--)
    {
      if (num >0)
	{
	  mod = num%10;
	  num /= 10;
	  cout << mod << " "; 
	} 
	}
  cout << endl << endl;

}
