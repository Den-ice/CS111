#include <iostream>
#include <fstream>
using namespace std;
void showProgInfo();
int getNum();
void findLargest();

int main()
{
showProgInfo();
 int n1=getNum();
 int n2=getNum();
 int n3=getNum();
 findLargest(n1,n2,n3);
 return 0;
}

void showProgInfo()
{
  cout << "***************************************************************\n"
       << "This program will ask you enter 3 numbers and find the largest.\n"
       << "***************************************************************\n";
}

int getNum()
{
  int num;
  if (num>=0)
    {
      for (int t=1; t<=3; t++)
	{
	  cout << "Enter one number: ";
	  cin << num;
	  cout << endl;
	  return num;	
	}
    }
  else 
    {
      cout<< "Invalid number.\n";
    }
}

int findLargest(int n1, int n2, int n3)
{
  int largest;
  if (n1>n2 && n1>n3)
    {
      largest = n1;
    }
  else if (n2>n1 && n2>n3)
    {
      largest = n2;
    }
  else 
    {
      largest = n3;
    }
  cout << "The largest number among " << n1 << " " << n2 << " and " << n3 << " is "
}
