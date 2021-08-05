#include <iostream>

using namespace std;

int main ()

{
  char grade;
  bool pass;

  cout<<"Please enter grade"<<endl;
  cin.get(grade);

  pass = false;
   
  if(grade=='A')
    { 
      cout << "Excellent" << endl;
      pass = true;
    }
  else if (grade=='B')
    {
      cout  << "Good Job" << endl;
      pass = true;
    }
  else if (grade=='C')
    {
      cout << "Ok" << endl;
	pass = true;
    }
 
  else if(grade == 'D')
    {
      cout<< "Work Harder"<<endl;
      pass = false;
      
     }
  else if(grade == 'F')
    {
      cout << "Failed"<<endl;
	pass = false;
	
     }
  if (pass == true)
    {
      cout<<"Congratulations! You passed the class."<<endl;
    }
  else if (pass== false)
    {
      cout <<""<< endl;
    }
  else  
   {
     cout<< "Invalid";
   }
      
}
