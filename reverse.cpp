//this programm will return the result after reversing.
#include <iostream>
void reverse(int number)
{
    int shifted_one = 1;
    int arr1[32] {0};
    for(int i = 0; i < 32; i++)
    {
        number ^= shifted_one;
        shifted_one <<= 1;
    }
    std::cout << number;
   
}

int main()
{
    int number = 0;
    int number_copy = 0;
    std::cout << "please enter the number\n";
    std::cin >> number;
    number_copy = number;
    int arr[32] {0};
    std::cout << "its binary code of your number before reversing\n";
    for(int i = 0; i < 32 || number_copy > 0; i++)
    {
        arr[31-i] = number_copy % 2;
        number_copy /= 2;
        std::cout << arr[i];
    }
    std::cout << "\n";
    reverse(number);
    system("pause");
    return 0;
}