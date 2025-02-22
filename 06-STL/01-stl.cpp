#include <iostream>
using namespace std;
void print()
{
  cout << "Rahul";
}
int sum(int a, int b)
{
  return a + b;
}
int main()
{
  int a, b;
  cin >> a;
  cin >> b;
  cout << sum(a, b);
  return 0;
}