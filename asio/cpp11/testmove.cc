#include <string>
#include <iostream>
#include <utility>

using namespace std;

struct Foo
{
    int a_;
    int &b_;
    Foo(int a, int &b) : a_(a), b_(b) {  }
    Foo(const Foo &&foo) : a_(std::move(foo.a_)), b_(foo.b_)
    {
    }
};

int b = 10;
int main()
{
    Foo f(5, b);
    Foo mf = std::move(f);
    mf.a_ = 1;
    cout << mf.a_ << endl;
    cout << mf.b_ << endl;
    cout << f.a_ << endl;
    cout << f.b_ << endl;

    string a = "aaaaa";
    string b = "bbbbb";
    string c = std::move(a);
    a[0] = 'x';
    a[1] = '\0';
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}
