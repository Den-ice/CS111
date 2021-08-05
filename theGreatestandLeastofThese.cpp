//A program with a loop that lets the user enter 100 integers and decides what is the smallest and greatest.
#include <iostream>

using namespace std;

int main ()
{
  int count=1;
  int min = 0;
  int max = 0; 
  int num=1;

  do
    {
      cout << "\nEnter 100 positive numbers: ";
      cin >> num;
     
      if (min == 0 && max == 0 && num >= 0)
	{
	  max = num;
	  min = num;
	}
      else if (num < min && num >= 0 && max> num)
	{
	  min = num;
	}
      else if (num > max && num >=0) 
	{
	  max = num;
	}
      
      
      count++;
      
    }while (count<100);

  cout << "The smallest number is " << min;
  cout << " and the largest number is ";
  cout << max << ".\n";

  return 0;
}
