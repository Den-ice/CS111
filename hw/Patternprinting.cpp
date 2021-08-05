#include <iostream>
using namespace std;
int main()
{
  int r,c;
  for (r=6; r>=1; r--)
    {
      for (c=1; c<=6; c++)
	{
	  if (c>=r)
	    cout << c-r+1;
	  else 
	    cout << "*";
	}
      cout << endl;
    }
}
