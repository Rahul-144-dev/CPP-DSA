#include <iostream>
using namespace std;
void print1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void print2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void print3(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void print4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
}
void print5(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void print6(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}
void print7(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << "· ";
    }
    for (int k = 1; k <= (2 * i + 1) - 2; k++)
    {
      cout << "* ";
    }
    for (int j = 1; j <= n - i; j++)
    {
      cout << "· ";
    }
    cout << endl;
  }
}
void print8(int n)
{
  for (int i = n; i >= 1; i--)
  {
    for (int k = 0; k < n - i; k++)
    {
      cout << "· ";
    }
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      cout << "* ";
    }
    for (int k = 0; k < n - i; k++)
    {
      cout << "· ";
    }
    cout << endl;
  }
}
void print_8(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j < i; j++)
    {
      cout << "· ";
    }
    for (int k = 1; k <= (2 * n) - (2 * i - 1); k++)
    {
      cout << "* ";
    }
    for (int j = 1; j < i; j++)
    {
      cout << "· ";
    }
    cout << endl;
  }
}
void print_8_str(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "· ";
    }
    for (int k = 0; k < 2 * n - (2 * i + 1); k++)
    {
      cout << "* ";
    }
    for (int j = 0; j < i; j++)
    {
      cout << "· ";
    }
    cout << endl;
  }
}
void print9(int n)
{
  print7(n);
  print8(n);
}
void print_9(int n)
{
  for (int out = 0; out < n; out++)
  {
    for (int i = 0; i < n - out - 1; i++)
    {
      cout << "·";
    }

    for (int l = 0; l < n - out - 1; l++)
    {
      cout << "·";
    }
    cout << endl;
  }
}
void print10(int n)
{
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int stars;
    (i < n) ? stars = i : stars = 2 * n - i;
    for (int j = 1; j <= stars; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void print11(int n)
{
  int start;
  for (int i = 1; i <= n; i++)
  {
    (i % 2 == 0) ? start = 0 : start = 1;
    for (int j = 1; j <= i; j++)
    {
      cout << start << " ";
      start = 1 - start;
    }
    cout << endl;
  }
}
void print12(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    for (int k = 1; k <= 2 * (n - i); k++)
    {
      cout << "- ";
    }
    for (int l = 1; l <= i; l++)
    {
      cout << (i - l + 1) << " ";
    }
    cout << endl;
  }
}
void print13(int n)
{
  int num = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
}
void print14(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + i - 1; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void print15(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (char ch = 'A'; ch <= (n - i) + 'A'; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void print16(int n)
{
  char ch = 'A';
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << ch << " ";
    }
    ch++;
    cout << endl;
  }
}
void print17(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int sp = 1; sp <= n - i; sp++)
    {
      cout << "  ";
    }
    char ch = 'A';
    int breakpoint = (2 * i - 1) / 2;
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      cout << ch << " ";
      (j <= breakpoint) ? ch++ : ch--;
    }
    for (int sp = 1; sp <= n - i; sp++)
    {
      cout << "  ";
    }
    cout << endl;
  }
}
void print18(int n)
{
  char ch = 'A' + n - 1;
  for (int i = 1; i <= n; i++)
  {
    char v = ch;
    for (int j = 1; j <= i; j++)
    {
      cout << v << " ";
      v++;
    }
    ch--;
    cout << endl;
  }
}
void print18_str(int n)
{
  char x = 'A' + n - 1;
  for (int i = 1; i <= n; i++)
  {
    for (char ch = x - i + 1; ch <= x; ch++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
}
void print19_initial(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n + 1 - i; j++)
    {
      cout << "* ";
    }
    for (int s = 1; s <= 2 * i - 2; s++)
    {
      cout << "· ";
    }
    for (int k = 1; k <= n + 1 - i; k++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void print19_math(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n + 1 - i; j++)
    {
      cout << "* ";
    }
    for (int s = 1; s <= 2 * i - 2; s++)
    {
      cout << "· ";
    }
    for (int k = 1; k <= n + 1 - i; k++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void print19_str(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n + 1 - i; j++)
    {
      cout << "* ";
    }
    for (int s = 1; s <= 2 * i - 2; s++)
    {
      cout << "· ";
    }
    for (int k = 1; k <= n + 1 - i; k++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    for (int s = 1; s <= 2 * (n - i); s++)
    {
      cout << "· ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void print20(int n)
{
  int mid = n;
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int starts;
    (i <= n) ? starts = i : starts = 2 * n - i;
    int spaces;
    (i <= n) ? spaces = 2 * (n - i) : spaces = 2 * (i - n);
    for (int j = 1; j <= starts; j++)
    {
      cout << "* ";
    }
    for (int k = 1; k <= spaces; k++)
    {
      cout << "· ";
    }
    for (int j = 1; j <= starts; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void print20_var(int n)
{
  int nst = 1;
  int nsp = 2 * n - 2;
  for (int i = 1; i <= 2 * n - 1; i++)
  {

    for (int j = 1; j <= nst; j++)
    {
      cout << "* ";
    }
    for (int k = 1; k <= nsp; k++)
    {
      cout << "· ";
    }
    for (int l = 1; l <= nst; l++)
    {
      cout << "* ";
    }
    cout << endl;
    if (i < n)
    {
      nst++;
      nsp -= 2;
    }
    else
    {
      nst--;
      nsp += 2;
    }
  }
}
void print21(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == 1 || i == n || j == 1 || j == n)
        cout << "* ";
      else
        cout << "· ";
    }
    cout << endl;
  }
}
void print22(int n)
{
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    for (int j = 1; j <= 2 * n - 1; j++)
    {
      int top = i - 1;
      int left = j - 1;
      int bottom = (2 * n - 1) - i;
      int right = (2 * n - 1) - j;
      cout << (n - min(min(top, bottom), min(right, left))) << " ";
    }
    cout << endl;
  }
}
int main()
{
  int test;
  cin >> test;
  for (int i = 0; i < test; i++)
  {
    int n;
    cin >> n;
    cout << "test case : " << n << endl;
    print22(n);
  }
  return 0;
}
