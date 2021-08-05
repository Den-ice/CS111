#include <iostream>
using namespace std;
int main ()
{
  int r, c, rows;
  cin>> rows;
  for (r=1;r<=rows;r++)
    {
      for (c=1; c<=rows+1; c++)
	{
	  if (c<=r)
	    cout<< "*";
	  else
	    cout<<c-r;
	}
      cout<<endl;
    }
}
