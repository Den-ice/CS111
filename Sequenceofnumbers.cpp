#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  int ch, t, ub, lb;


  do 
    {
      cout << "\nSequence of numbers Menu\n"
	   << "\t1. Odd numbers\n"
	   << "\t2. Even numbers\n"
	   << "\t3. Multiples of 3\n"
	   << "\t4. Multiples of 4\n"
	   << "\t5. Squares of odd numbers\n"
	   << "\t6. Quit\n"
	   << "Enter your choice: ";
      cin >> ch;
      
      switch (ch)
	{
	case 1: 
	  {
	    cout << "\nEnter upper and lower bounds: ";
	    cin >> lb >> ub;
	    
	    while(lb >= ub || (lb<0 || ub<0))
	      {
		cout << "\nInvalid bounds.";
		cout << "\nEnter upper and lower bounds: ";
		cin >> lb >> ub;
	      }
	    do 
	       {
		 lb++;
		 if (lb%2==1)
		   {
		     cout << lb << " ";
		   }
	       }while (lb != ub);
	    cout << endl;
	  }
	  break;
	  
	case 2:        
          {
	    cout << "\nEnter upper and lower bounds: ";
	    cin >> lb >> ub;
	    
	    while(lb >= ub || (lb<0 || ub<0))
	      {
		cout << "\nInvalid bounds.";
		cout << "\nEnter upper and lower bounds: ";
		cin >> lb >> ub;
	      }
	    do
	      {
		lb++;
		if (lb%2==0)
		  {
		    cout << lb << " ";
		  }
	      }while (lb != ub);
	    cout << endl;
          }
	  break;

	case 3: 
	  {
	    cout << "\nEnter upper and lower bounds: ";
	    cin >> lb >> ub;
	    
	    while(lb >= ub || (lb<0 || ub<0))
	      {
		cout << "\nInvalid bounds.";
		cout << "\nEnter upper and lower bounds: ";
		cin >> lb >> ub;
	      }
	    do
	      {
		lb++;
		if (lb%3==0)
		  {
		    cout << lb << " ";
		  }
	      }while (lb != ub);
	    cout << endl;
	  }
	  break;

	case 4: 
          {
            cout << "\nEnter upper and lower bounds: ";
            cin >> lb >> ub;
	    
            while(lb >= ub || (lb<0 || ub<0))
              {
                cout << "\nInvalid bounds.";
                cout << "\nEnter upper and lower bounds: ";
                cin >> lb >> ub;
              }
	    do
	      {
		lb++;
		if (lb%4==0)
		  {
		    cout << lb << " ";
		  }
	      }while (lb != ub);
	    cout << endl;
          }
	  break;

	case 5:
          {
            cout << "\nEnter upper and lower bounds: ";
            cin >> lb >> ub;
	    
            while(lb >= ub || (lb<0 || ub<0))
              {
                cout << "\nInvalid bounds.";
                cout << "\nEnter upper and lower bounds: ";
                cin >> lb >> ub;
              }
	    do
	      {
		lb++;
		if (lb%2==1)
		  {                            
		    cout << pow(lb,2) << " ";
		  }
	      }while (lb != ub);
	    cout << endl;
          }
	}

      while (ch<1 || ch>6)
        {
          cout << "\nInvalid choice.";
          cout << "Enter your choice (1-6): ";
          cin >> ch;
        }
      
    }while (!(ch==6));

  return 0;
}
