#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int base=0,num,d,mod,sum=0, length =1,b;

  cout << "\nEnter number: ";
  cin >> num;  
 
  b=num;
  
  while (b/=10)
   length++;
 
 for (int n=length; n>=1;n--)
   {
     
     mod = num%10;
     num /= 10;
     d = mod *  pow(4,base++);
     sum += d;
     
     
   }	
 cout << "Output: " <<sum << endl << endl;
 
}

