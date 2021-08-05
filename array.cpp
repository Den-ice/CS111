#include <iostream>
using namespace std;

int main ()
{
  ofstream fout;
  ifstream fin;
  const int size;
  double num[size];
  
  fin.open ("fiveIntegers.txt")
    if (!fin)
      {
        cout << "No input file found";
      }
    else
      {
	fout.open("intOutput.txt")

	for (int i = 0; i < size; i++)
	  {
	    fin >> numbers[i];
	    cout << number << endl;
	  }
	fin.close();
	for (int 1 = 0; i < size; i++)
	  {
	    if (numbers[i]
