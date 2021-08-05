//Purpose: This program calculates is to take information of students and their grades into another file. Then you find the average total of the class, lowest and highest scoring student. 
//Implemented by: Denice Hickethier
//11/28/2016
//User Information: The program uses some references, arrays, and text file functions to find and output the information given and calculated. Finally, displayingand returning the average, lowest and highest scoring student to the user.

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void inputData(string [], string [], int [], int [], int [], int [], int [], double [], char []);
void calcGrade(string [], string [], int [], int [], int [], int [], int [], double [], char []);
void outputData(string [], string [], double [], char []);
void getAverage(double [], double &);
void getHighest(string[], string[], double[], char[], int&);
void getLowest(string[], string[], double[], char[], int&);

const int SIZE = 15;
int main()
{
  int high = 0, low = 0;
double avg = 0;
  string first_name[SIZE], last_name[SIZE];
  char grade[SIZE];
  int  hw[SIZE], quiz[SIZE], lab[SIZE], midterm[SIZE], final[SIZE];
  double total[SIZE];

  inputData(first_name, last_name, hw, quiz, lab, midterm, final, total, grade);
  calcGrade(first_name, last_name, hw, quiz, lab, midterm, final, total, grade);
  outputData(first_name, last_name, total, grade);
  getAverage(total, avg);
  getHighest(first_name, last_name, total, grade, high);
  getLowest(first_name, last_name, total, grade, low); 
 return 0;
}

void inputData (string first_name [], string last_name [], int hw [], int quiz [], int lab[], int midterm [], int final [], double total [], char grade [])
{
  ifstream fin;
  int i=0;
  fin.open("gradebook.txt");
  if (fin)
    {
      while (fin>> first_name[i]>> last_name[i]>> hw[i]>> quiz[i]>> lab[i] >>midterm[i] >> final[i])
	{
	    i++;	    
	}
    } 
  fin.close();
}

void calcGrade (string first_name [], string last_name [], int hw [], int quiz [], int lab [], int midterm [], int final [], double total [], char grade [])
{
  for(int i = 0; i<SIZE; i++)
    {
      total[i] = hw[i] * 0.2 + quiz[i] * 0.1 + lab[i] * 0.1 + midterm[i] * 0.3 + final[i] * 0.3;
      if (total[i]>=90)
	{ 
	  grade[i] = 'A';
	}
      else if (total[i]<=89.9 && total[i]>=80)
	{
	  grade[i] = 'B';
	}
      else if (total[i]<=79.9 && total[i]>=70)
	{
	  grade[i] = 'C';
	}
      else if (total[i]<=69.9 && total[i]>=60)
	{
	  grade[i] = 'D';
	}
      else 
	{
	  grade[i] = 'F';
	}
    }
}

void outputData(string first_name [], string last_name [], double total [], char grade [])
{
  ofstream fout;
  fout.open("output.txt");
  
  if (fout)
    {
      for (int i=0; i<SIZE; i++)
	{
	  fout << first_name[i] << " " << last_name[i] << " " <<  total[i] << " " <<  grade [i] << endl;
	}
    }
}

void getAverage(double total[], double &number)
{
  for(int i=0; i<SIZE; i++)
    {
      number += total[i];
    }
  number /=SIZE;
  cout << "The average is " << setprecision(4) << number << endl;
  
}

void getHighest(string first_name [], string last_name [], double total [], char grade [], int &highest)
{
  int i = 0;

  for (int j = 1; j<SIZE; j++)
    {
     if (total[i] > total[j])
	{
	  highest = i;
	  
	}
      else if (total[i] < total[j] )
	{
	  highest = j;
	  i = j;
	}
      else
	{
	}
    }
  cout << "The highest total grade " << first_name[highest] << " " << last_name[highest] << " " << total[highest] << " " << grade[highest] << endl;
}

void getLowest(string first_name [], string last_name [], double total [], char grade [], int &lowest)
{
  int i = 0;

  for (int j = 1; j<SIZE; j++)
    {
      if (total[i] < total[j])
        {
          lowest = i;

        }
      else if (total[i] > total[j] )
        {
          lowest = j;
          i = j;
        }
      else
        {
        }
    }
  cout << "The lowest total grade " << first_name[lowest] << " " << last_name[lowest] << \
    " " << total[lowest] << " " << grade[lowest] << endl;
}
