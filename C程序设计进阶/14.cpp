#include <iostream>

int main() {
  struct { 
    int k; 
    char s[30]; 
  } a[5] = {1, "ABC", 2, "abc"}, *p = a;
  std::cout << (*(p++)->s);
  return 0;
}
