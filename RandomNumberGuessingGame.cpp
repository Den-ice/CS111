//Random number guessing game program
#include <iostream>
#include <cstdlib>
//#include <ctime>


using namespace std;

int main ()
{

  int rn,g;
  unsigned seed = time (0);
  srand (seed);

  rn = rand()%101;

  do 
  {
    cout << "\nGuess what the number is: ";
    cin >> g;
  
    if (g<rn&&g>-1)
      {
	cout << "\nToo low, try again.\n";
      }
    else if (g>rn) 
      {
	cout << "\nToo high, try again.\n";
      }
    else if (g<0)
      {
	cout << "\nOnly positive numbers, try again.\n";
      }
    else 
      {
	cout<<endl; 
	return 0;
      }
  }
  while (g>rn||g<rn);

}
