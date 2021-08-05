#include <iostream>
using namespace std;

const int YR=3;
const int homes=3;

struct address
{
  int number;
  string street;
  string city;
};

struct home
{
  int id;
  address ad;
  int years[YR];
};

void fillArray(home[]);
void printHmSoldSince2014();

int main()
{
  home ar[homes];
  fillArray(ar);
}

void fillArray(home ar[])
{
  for (int i=0; i<homes; i++)
    {
      cout << "Enter the id: ";
      cin >> ar[i].id;
      cout << "Enter the number the address:  ";
      cin >> ar[i].ad.number;
      cout << "Enter the street name: ";
      cin >> ar[i].ad.street[i];
    
      for (int c=0; c<YR; c++)
	{
	  cout << "\nEnter the " << c+1 << "  year: ";
	  cin >> ar[i].years[c];     
	}
    }    
}

void printHmSoldSince2014()
{

}
