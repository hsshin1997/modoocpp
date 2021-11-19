#include <iostream>

int main() {
  int arr[3][2] = {1, 2, 3, 4, 5, 6};
  int(&ref)[3][2] = arr;

  ref[0][0] = 2;
  ref[1][1] = 3;
  ref[2][0] = 1;

  std::cout << arr[0] << std::endl << arr[1] << std::endl << arr[2] << std::endl;
  return 0;
}