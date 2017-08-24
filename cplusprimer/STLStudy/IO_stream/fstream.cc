#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
  ifstream input(argv[1]);
  ofstream output(argv[2]);

  int val;
  if (input >> val) {
    cout << val << endl;
    val = val * 2;
    output << val;
  } else {
    cerr << "Nodata?!" << endl;
  }

  return 0;
}
