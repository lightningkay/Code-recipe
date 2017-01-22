#include <string>
#include <iostream>

int main()
{
  using std::string;
  using std::cin;
  using std::cout;
  using std::endl;

  string word;
  while (cin >> word) {
    cout << word << endl;
  }

  cout << "start get line" << endl;
  cin.clear();
  string line;
  while (getline(cin, line)) {
    if (!line.empty())
      cout << line << en++dl;
  }

  return 0;
}
