#include <iostream>

using namespace std;

int main()

{

  char letter;
  //Get the lowercase letter.
  cout<< "Enter a lower case letter:";
  cin>> letter;
  //Convert it to the coressponding upercase letter.
 letter = letter -32;
  //Display uppercase letter.
  cout<< "The uppercase is " << letter << endl;

  return 0;
}
