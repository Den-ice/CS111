#include <iostream>
#include <string>

using namespace std;

int main ()
{
  double t1,t2,t3;
  string n1, n2 , n3;
  int f, l;

  cout << "Enter names of top 3 runners: \n";
  getline(cin, n1);
  cout << endl;
  getline (cin, n2);
  cout << endl;
  getline (cin, n3);

  cout << "\nEnter the runners' times: \n";
  cin >> t1 >> t2 >> t3;

  if (t1<0||t2<0||t3<0)
    {
      cout<<"Not valid time\n";
    }
  else if (t1<t2 && t1<t3)
    {
      cout << n1 << " is first place\n";
    }
  else if (t2<t1 && t2<t3)
    {
      cout << n2 << " is first place\n";
    }
  else if (t3<t1 && t3<t2)
    {
      cout << n3 << " is first place\n";
    }
  else if (t1>t2 && t1>t3)
    {
      cout << n1 << " is first place\n";
    }
  else if (t2>t1 && t2>t3)
    {
      cout << n2 << " is last place\n";
    }
  else if(t3>t1 && t3>t2)
    {
      cout << n3 << " is last place\n";
    }
  else 
    {
      cout << "\n";
    }
  return 0;
}
