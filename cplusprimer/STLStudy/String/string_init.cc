#include <iostream>
#include <string>

using std::string;

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;
  string s1;
  string s2 = s1;
  string s3 = "hiya";
  string s4(10, 'c');

  string s5 = "hiya"; // copyable initialize
  string s6("hiya"); // direct initialize
  string s7(10, 'c'); // initialize
  cout << "s1 " << s1 << endl;
  cout << "s2 " << s2 << endl;
  cout << "s3 " << s3 << endl;
  cout << "s4 " << s4 << endl;
  cout << "s5 " << s5 << endl;
  cout << "s6 " << s6 << endl;
  cout << "s7 " << s7 << endl;

  return 0;
}
