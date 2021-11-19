#include <iostream>

int function(int& a){
  a = 2;
  return a;
}

int main() {
  int a = 5;
  const int& b = function(a);
  b = 5;
  std::cout << "a:" << a << ", b:" << b << std::endl;
  return 0;
}