#include <iostream>
#include <string>
#include <cctype>

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;
  using std::string;

  string s1(10, 'c');
  string s("some string");

  for (auto c: s1) {
    cout << c << endl;
  }

  cout << "using char type" << endl;
  for (char c: s1) {
    cout << c << endl;
  }

  cout << "change s1.." << endl;
  for (char &c: s1) {
    c = toupper(c);
  }
  cout << s1 << endl;

  cout << "iterator string..." << endl;
  for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index) {
    s[index] = toupper(s[index]);
  }
  cout << "string s is " << s << endl;
  return 0;
}
