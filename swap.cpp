//this programm will swap(changing places) your wanted bits, of a number.
#include <iostream>

int main () 
{
  int number = 0;
  int bit_one = 0;
  int bit_two = 0;
  int result;
  int arr[32] {0};
  int arr1[32] {0};
  std::cout << "enter your number\n";
  std::cin >> number;
  int number_copy = number;
  std::cout << "it's a binary  representation of your numbern\n";
  for(int i = 0; i < 32 || number_copy > 0; i++)
  {
    arr[32-i] = number_copy % 2;
    number_copy /= 2;
  }
  for(int i = 0; i < 32 ; i++)
  {
    std::cout << arr[i];
  }
  std::cout << "\n";
  std::cout << "now enter the bit's which you want to swap\n";
  std::cin >> bit_one;
  std::cin >> bit_two;
  result = (1 << bit_one) ^ number;
  result = (1 << bit_two) ^ result;
  std::cout << "whao! your bit's have changed, look!\n";
  for(int i = 0; i < 32 || result > 0; i++)
  {
    arr1[32-i] = result % 2;
    result /= 2;
  }
  for(int i = 0; i < 32; i++)
  {
    std::cout << arr1[i];
  }
  system("pause");
  return 0;
}

