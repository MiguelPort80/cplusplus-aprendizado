#include <iostream>

int main(){
  int* num = new int;

  std::cout << num << std::endl;
  delete num;

  int* arr = new int[10];
  for(int i = 0; i < 10; i++){
    arr[i] = i;
    std::cout << arr[i] << std::endl;
  }
  delete[] arr;
}
