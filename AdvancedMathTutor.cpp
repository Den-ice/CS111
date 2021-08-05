z//Program for math tutoring.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()

{

  int result, r1,r2,r3,r4,r5,r6;
  unsigned seed = time (0);
  char msymbol;
  srand (seed);

  //Constants for number thresholds
  r1 = rand()%101;
  r2 = rand()%101;
  r3 = rand()%101;
  r4 = rand()%11;
  r5 = rand()%11;
  r6 = rand()%11;

  //Ask user for Math operator.
  cout << "Enter one of these characters: +, -, *, /, or ^" << endl;
  cin.get(msymbol);

  if (msymbol=='+')

    {
      //Calculate.
      result == r1+r2+r3;
      cout << endl << setw(4) << right << r1 << endl;
      cout << setw(4) << right << r2 << endl;
      cout << left << "+" << setw(3) << right << r3 << endl;
      cout << setw(4) << "------" << endl;    
      cin >> result;
      cout << endl;
      
      //Determine the result.
      if (result == r1+r2+r3)

	{
	  cout << "Correct" << endl << endl;
	}
     
      else
	
        {
	  cout<< "Incorrect" << endl << endl;
        }
    }
  else if (msymbol == '-')

	{
	  //Calculate.
	  result == r1-r2-r3;
	  cout << endl << setw(4) << right << r1 << endl;
	  cout << setw(4) << right << r2 << endl;
	  cout << left << "-" << setw(3) << right << r3 << endl;
	  cout << setw(4) << "-----" << endl;
	  cin >> result;
	  cout << endl;

	    //Determine the result.
	    if (result == r1-r2-r3)
	      {
		cout<< "Correct" << endl << endl;
	      }

	    else

	      {
		cout<< "Incorrect" << endl << endl;
	      }
	}

  else if (msymbol == '*')
 
	{
	  //Calculate.
	  result == r1*r2*r3;
	  cout << endl << setw(4) << right << r1 << endl;
          cout << left << "*" << setw(3) << right << r2 << endl;
          cout << left << "*" << setw(3) << right << r3 << endl;
          cout << setw(4) << right << "------" << endl;
          cin >> result;
	  cout << endl; 

	  //Determine the result.
	  if (result == r1*r2*r3) 

	    {
	      cout<< "Correct" << endl << endl;
	    }

	  else
 
	    {
	      cout<< "Incorrect" << endl << endl;
	    }
        }

  else if (msymbol == '/')

        {
	  //Calculate.
	  result == r1/r2/r3;
	  cout << endl <<  r1 << "/" << r2 << "/" << r3 << endl;
	  cout << "--------" << endl; 
          cin >> result;
	  cout << endl;
         
          //Determine the result.
	  if (result == r1/r2/r3)

	    {
	      cout << "Correct" << endl << endl;
	    }

	  else 

	    {
	      cout << "Incorrect" << endl << endl;
	    }
	}

  else if (msymbol == '^')

        {
	  //Calculate.
	  result == (pow(r1,2))+(pow(r2,2))+(pow(r3,2));
	  cout << endl << setw(5) << right << r1 << "^" << r4 << endl;
	  cout << setw(5) << right << r2 << "^" << r5 << endl;
	  cout << left << "+" << setw(4) << right << r3 << "^" << r6 << endl;
	  cout << "--------" << endl;
          cin >> result;
	  cout << endl;


	  //Determine the result.
	  if (result == (pow(r1,2))+(pow(r2,2))+(pow(r3,2)))
	   
	    {
	      cout << "Correct" << endl << endl;
	    }

	  else

	    {
	      cout << "Incorrect" << endl << endl;
	    }
	}
  else

    {
      cout << "Invalid" << endl << endl;
    }

}

