//Purpose: This programs gives out the inquired information about a soccer team.
//Implemented by: Denice Hickethier
//12/7/2016
//User Information: The program displays information about 10 players getting data from input files, gets the average of points from the overall team, displays the player with the highest points, and gives specific info on a player when asked in a menu that displays all these options. This uses structs, reference functions, regular functions, and arrays.

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


struct Player
{
  string name;
  int number;
  string address, city, state;
  int zip;
  double phone, date;
  int points;
};

const int members = 10;

void readData(Player []);
void displayData(Player []);
void getAverage(Player []);
void getHighest(Player []);
void getTarget(Player [], int, int&); 

int main ()
{
  Player team[members];
  int ch, num, i=members; 

  readData(team);
do
  {
    cout<<"1. Display all the data stored.\n2. Calculate and display the average of points earned by the team members.\n3. Display the info of the highest player who has earned the most points.\n4. Info of the player with assigned number.\n"
	<< "Enter option: ";
    cin>>ch;
    
    if (ch>=1&&ch<=4)
      {
	switch (ch)
	  {
	  case 1:{ displayData(team);}
	    break;
	  case 2:{ getAverage(team);}
	    break;
	  case 3:{ getHighest(team);}
	    break;
	  case 4: 
	    { 
	      cout << "Enter the player's number: ";
	      cin>>num;
	      
	      getTarget(team, num, i);
	      cout<<endl<<team[i].name<<" "<<team[i].number<<" "<<team[i].address<<" "
		  <<team[i].city<<" "<<team[i].state<<" "<<team[i].zip<<" "
		  <<setprecision(10)<<team[i].phone<<" "<<team[i].date<<" "
		  <<team[i].points<<endl;
	    }
	    break;
	  }
      }
    else
      {
	cout << "\nInvalid Input.\n";
      }
  }while(ch<1 || ch>4);

  return 0;
}

void getTarget(Player t[], int num, int &n)
{ 
  int er=0;
  for (int i=0; i<members; i++)
    {
      if (t[i].number==num)
        {
	  n=i;
	}
      else
	{
	  er++;
	}
    }
}

void readData(Player t[])
{
  ifstream fin;
  fin.open("team.txt");

  if (fin)
    {
      for (int i=0; i<members;i++)
	{
	  fin>>t[i].name>>t[i].number>>t[i].address>>t[i].city>>t[i].state
	     >>t[i].zip>>t[i].phone>>t[i].date>>t[i].points;
	}
      fin.close();
    }
  else
    {
      cout << "\nFile Not Found!\n";
    }
}

void getHighest(Player t[])
{
  int h=t[0].points;

  for (int i=0; i<members;i++)
    {
      if (t[i].points>h)
	{
	  h=t[i].points;
	}
    }
  for (int i=0; i<members; i++)
    {
      if (t[i].points==h)
	{
	  cout<<endl<<t[i].name<<" "<<t[i].number<<" "<<t[i].address<<" "
	      <<t[i].city<<" "<<t[i].state<<" "<<t[i].zip<<" "<<setprecision(10)
	      <<t[i].phone<<" "<<t[i].date<<" "<<t[i].points<<endl;
	}
    }
}

void getAverage(Player t[])
{
  int tp=0;
  for (int i=0; i<members;i++)
    {
      tp+=t[i].points;
    }
  cout<<"The average of points earned is: "<<tp/members<<endl;
}

void displayData(Player t[])
{
  for (int i=0; i<members;i++)
    {
      cout<<t[i].name<<" "<<t[i].number<<" "<<t[i].address<<" "
	  <<t[i].city<<" "<<t[i].state<<" "<<t[i].zip<<" "<<setprecision(10)<<t[i].phone
	  <<" "<<t[i].date<<" "<<t[i].points<<endl;
    }
}
