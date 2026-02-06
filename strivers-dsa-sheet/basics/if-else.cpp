#include <iostream>
using namespace std;
int main()
{
int a;
cout << "Enter your age: ";
cin >> a;

if (a > 19)
{
cout << "Adult\n";
}
else if (a > 12)
{
cout << "Teen\n";
}
else
{
cout << "Baby\n";
}
}

