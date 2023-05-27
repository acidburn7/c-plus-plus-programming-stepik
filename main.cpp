#include <iostream>

using namespace std;

int main()
{
  // int i = 42;
  // double d = 3.14;
  // const char *s = "C-style string";

  // cout << "This is an integer " << i << "\n";
  // cout << "This is a double " << d << "\n";
  // cout << "This is a \"" << s << "\"\n";

  // int y = 0;
  // cout << "Input your number: " << endl;
  // cin >> y;
  // cout << y;

  char c = '\0';
  while (cin.get(c)) {
    // на каждой итерации считываем один символ в переменную c
    /* здесь можно пользоваться значением 
    прочитанным в переменную c */
    if (c != 'a') {
      cout << c;
    }
  }


  return 0;
}