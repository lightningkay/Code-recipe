#include <iostream>
#include <string>

int main()
{
  using std::string;
  using std::cout;
  using std::cin;
  using std::endl;

  string s1, s2;
  cin >> s1 >> s2;
  cout << s1 << " ** " << s2 << endl;

  cout << "s1 is empty? " << s1.empty() << endl;
  cout << "s1 size si " << s1.size() << endl;

  int i = 0;
  cout << "input the index i " << endl;
  cin >> i;
  cout << "the " << i << "index is " << s1[i] << endl;
  cout << "s1 + s2 = " << s1 + s2 << endl;
  cout << "s1 == s2? " << (s1 == s2) << endl;
  cout << "s1 != s2? " << (s1 != s2) << endl;
  
  return 0;
}
