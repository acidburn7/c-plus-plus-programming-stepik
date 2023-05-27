#include <iostream>

using namespace std;

// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
//

int power(int x, unsigned p) {
  int answer = x;
cout << p;
  if (p > 1) {
    for (int i = 1; i < p; ++i) {
      answer *= x;
    }
  }
  
  return answer;
}

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

  // char c = '\0';
  // while (cin.get(c)) {
  //   // на каждой итерации считываем один символ в переменную c
  //   /* здесь можно пользоваться значением 
  //   прочитанным в переменную c */
  //   if (c != 'a') {
  //     cout << c;
  //   }
  // }

  // bool found = 0;
  // for (int i = 1; i*i < x; ++j) {
  //   for (int j = i; j*j < x; ++j) {
  //     if (i*i + j*j == x) {
  //       return true
  //     }
  //   }

  //   return false;
  // }
  int value;
  unsigned p;
  cin >> value >> p;
  cout << power(value, p);

  return 0;
}

