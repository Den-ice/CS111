#include <iostream>
#include <cmath>
using namespace std;

void formula1 (int b, int e)
{ 
  double ans=0.0;
  int a;
  for (int e; e<=a; e++)
    {
      ans += 1/ pow (b,e);
    }
  cout << "Formula 1: " << ans << endl;
}

void formula2 (int b, int e)
{
  double ans=0.0;
  int a;

  for (int b; b<=a; b++)
    {
      ans += 1/ pow (b,e);
    }
  cout << "Formula 2: " << ans << endl;
}

int main ()
{
  int ch, a, d;
do 
  {
    cout << "Mixed Sum Calculator Menu\n"
	 << "\t1. Mixed sum\n"
	 << "\t2. Mixed alternate sum\n"
	 << "\t3. Quit\n"
	 << "Enter your choice: ";
    cin >> ch;
    cout << endl;
    
    if (ch <3 && ch >=1)
      {
	cout << "\nEnter 2 integers: ";
	cin >> a >> d;
	cout << endl;
	switch (ch)
	  {
	  case 1: formula1 (a, d);
	    break;
	  case 2: formula2 (a, d);
	    break;
	  }
      }
    else if (ch!=3)
      {
        cout << "Invalid choice.\nPlease enter your choice: ";
        cin >> ch;
      }

  }while (!(ch==3));
}
  
