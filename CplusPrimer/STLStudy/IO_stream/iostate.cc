#include <iostream>

using namespace std;

int main()
{
  int val;
  cin >> val;
  cout << cin.eof() << endl;
  cout << cin.fail() << endl;
  cout << cin.good() << endl;
}
