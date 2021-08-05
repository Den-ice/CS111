#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{

  int a,y;
  char g;

  //Ask user for gender.

  cout << "\nEnter Gender: ";
    cin >> g;

  if (g=='F' || g=='f')
    {
      cout << "\nThank you for using the system, but we are only looking for men." << endl;
    }
      else if (g=='M' || g=='m')
	{
	  cout << "\nEnter Age: ";
	  cin >> a;
	  if (a > 17 && a < 42)
	    {
	      cout << "\nThe military is hiring more people like you." << endl;
	    }
	  else if ( a >=43 )
	    { 
	      cout << "\nThank you for using the system." << endl;
	    }
	  else if (a >=0 && a <= 16 ) 
	    {
	      //Calculate age.
	      y = 17-a;
	      cout << "\nYou have to wait " << y << " more year(s) to apply." << endl;
	    }
	  else 
	    {
	      cout << "\nInvalid Age" << endl;
	    }
	}
      else 
	{
	  cout << "\nInvalid" << endl;
	}
  return 0;
}
