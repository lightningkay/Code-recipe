#include <iostream>
#include <vector>
#include <string>

int main()
{
  using std::vector;
  using std::cin;
  using std::cout;
  using std::endl;
  using std::string;

  vector<int> ivec1;
  vector<string> svec;
  vector<int> ivec2(ivec1); // copy ivec1 to ivec2;
  vector<int> ivec3 = ivec1; // copy ivec1 to ivec3;

  vector<string> v1{"a", "b", "c"}; // list initialize
  // error using vector<string> v1("a", "b", "c");

  vector<int> ivec(10, -1); // ten elements is -1
  vector<string> svec1(10, "hi"); // ten string object is "hi"

}
