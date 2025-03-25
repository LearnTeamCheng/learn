#include <cstdio>
#include <iostream>
#include <string>

void printf(int x) { std::cout << x << std::endl; }

struct Foo {};

int main(int argc, char *argv[]) {
  int ival = 42;
  int *p = &ival;
  std::cout << p << ", " << *p << std::endl;
  *p = 5;
  std::cout << p << ", " << *p << std::endl;
  std::cout << &ival << ", " << ival << std::endl;
  int i = 42;
  int *p1 = &i;
  *p1 = *p1 * *p1;
  std::cout << *p1 << i << std::endl;
  int *a1, *a2;
  int a3 = 5;
  a1 = &a3;
  a2 = a1;
  std::cout << *a2 << std::endl;

  int i2 = 42;
  int &r1 = i2;
  const int &r2 = i2;
  printf(i2);
  printf(r1);
  printf(r2);
  r1 = 0;

  printf(i2);
  printf(r1);
  printf(r2);

  typedef char *pstring;
  const pstring cstr = 0;

  return 0;
}
