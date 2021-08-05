#include <iostream>
using namespace std;
int main ()
{
  int num, f1 = 0, f2 = 1, n = 0;
  cout << "\nEnter an integer: ";
  cin >> num;

  for (int i =1; i<=num; ++i)
    {
      
      n = f1+f2;
      f1=f2;
      f2=n;
      cout << n << " ";
    }
  cout << endl << endl;
}

