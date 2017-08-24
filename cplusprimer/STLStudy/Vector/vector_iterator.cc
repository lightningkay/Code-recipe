#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main()
{
  using std::vector;
  using std::cin;
  using std::cout;
  using std::endl;
  using std::string;

  string s;
  vector<string> v1;
  while (cin >> s) {
    v1.push_back(s);
  }

  cout << "string iterator ..." << endl;
  for (auto it = s.begin(); it != s.end(); ++it) {
    cout << *it << endl;
  }

  cout << "vector iterator ..." << endl;
  for (auto it = v1.begin(); it != v1.end(); ++it) {
    cout << *it << endl;
  }

  cout << "using string::const_iterator string iterator ..." << endl;
  for (string::const_iterator it = s.begin(); it != s.end(); ++it) {
    cout << *it << endl;
  }

  cout << "using vector<string>::const_iterator vector iterator ..." << endl;
  for (vector<string>::const_iterator it = v1.begin(); it != v1.end(); ++it) {
    cout << *it << endl;
  }

  cout << "using string::iterator string iterator ..." << endl;
  for (string::iterator it = s.begin(); it != s.end(); ++it) {
    cout << (*it = toupper(*it)) << endl;
  }

  cout << "using vector<string>::const_iterator vector iterator ..." << endl;
  for (vector<string>::iterator it = v1.begin(); it != v1.end(); ++it) {
    cout << *it << endl;
  }

  return 0;
}
