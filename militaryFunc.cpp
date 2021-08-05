#include <iostream>
#include <string>

using namespace std;

void GetInfo(string &, char &, int &);
void VerifyEligibility(string &, char &, int &);
void PrintLetter(string &, char &, int &);

int main ()
{
  GetInfo(string, char, int);
  VerifyEligibilit(string, char, int);
  PrintLetter(a, eligible, otherwise);
  return 0;
}

void GetInfo (string &a, char &b, int &c)
{
  cout << "Enter first name: ";
  cin >> a;
  cout << endl;
  cout << "Enter gender: ";
  cin >> b;
  cout << "Enter age: ";
  cin >> c;
}

void VerifyEligibility (string &a, char &b, int &c);
{
  bool gender, age, eligible, otherwise;
 
  if(b='m'|| b='M')
   {
     gender == true 
       if (c>=18)
	 {
	   age == true;
	   return elegible;
	 }
       else 
	 {
	   age == false;
	   return otherwise;
	 }
   }
  else 
    {
      gender == false;
      return otherwise;
    }
}

 void PrintLetter  (string a, bool eligible, bool otherwise)
{
  if (eligible)
    {
      cout << "Dear " << a << "." << "Please joing the military" << endl;
    }
  else 
    {
      cout << "Thank you for applying." << endl;
    }
}
