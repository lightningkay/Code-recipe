#include <iostream>
#include <string>
#include <vector>

int main()
{
  using std::vector;
  using std::cin;
  using std::cout;
  using std::endl;
  using std::string;
  vector<int> v2;
  for (int i = 0; i != 100; ++i) {
    v2.push_back(i);
  }

  vector<string> v1;
  string word;
  while(cin >> word) {
    v1.push_back(word);
  }

  cout << "ready to output" << endl;
  for (decltype(v1.size()) index = 0; index < v1.size(); index++) {
    cout << v1[index] << endl;
  }

  return 0;
}
