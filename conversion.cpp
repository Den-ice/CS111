#include <iostream>
using namespace std;

int main ()
{
  const int YARD = 36, FEET = 12;
  int inches, yards, feet, finalinches;
  
//Display program message. 
 
  cout<<"************************************************************************"<<endl;
  cout<<"This progream will convert a length in inches to yards, feet, and inches."<<endl;
  cout<<"************************************************************************"<<endl;

  //Ask user for yards.
  cout<<"Please enter a length in inches.";
    cin>> inches;
  //Calculate length.
  yards =inches / YARD;
  inches = inches % YARD;
  feet = inches /FEET;
  inches = inches % FEET;
  finalinches = inches;
  //Display length in yards, feets, and inches.
  cout<< yards<< "yards " << feet<< "feet " << inches<< "inches " ;
    cout<<"Thank you for using the program. Good bye." << endl;
  return (0);
}
