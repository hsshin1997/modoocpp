#include <iostream>

int change_val(int& p){
    p = 3;

    return 0;
}

int main() {
  int a = 5;
  int& b = a;

  std::cout << a << std::endl;
  change_val(a);
  std::cout << a << std::endl;
  return 0;
}