#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{

  unsigned seed = time(0);
  srand(seed);

  int r, min=0, max=0;
  double sum=0.0;

  for (int n = 1; n<=10; n++)
    {
      r = rand()%101;
      cout << setw(6) <<left<< n << right << r << endl;

      if (min==0 && max==0 && r>=0)
	{
	  max = r;
	  min = r;
	}     
      else if (r>max && r>min)
	{
	  max = r;
	}
      else if  (r<=min && r<max)
	{
	  min = r;
	}
      sum += r;
    }

    cout << "\nSum: " << sum 
       << "\nAverage: " <<  static_cast <double> (sum/10) 
       <<"\nGreatest: " << max 
       << "\nSmallest: " << min << "\n\n";
  
}
