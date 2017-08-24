#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct PersonInfo {
  string name;
  vector<string> phones;
  friend ostream & operator<<(ostream &os, PersonInfo &p) {
    os << "name is " << p.name << endl;
    os << "numbers " << endl;
    for (vector<string>::iterator it = p.phones.begin(); it != p.phones.end(); ++it) {
      os << (*it) << endl;
    }

    return os;
  }
};

int main()
{
  string line, word;
  vector<PersonInfo> people;
  while (getline(cin, line)) {
    PersonInfo info;
    istringstream record(line);
    record >> info.name;
    while (record >> word) {
      info.phones.push_back(word);
    }
    people.push_back(info);
  }

  for (vector<PersonInfo>::iterator it = people.begin(); it != people.end(); ++it) {
    cout << (*it);    
  }

  return 0;
}
