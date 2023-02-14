//this programm will reset your wanted bit of your given number.
#include <iostream>
void reset(unsigned int number, unsigned int bit, const int size)
{
    int shifted_one = 0;
    int shifted_zero = 0;
    shifted_one = 1 << (bit-1);
    shifted_zero = (~shifted_one);
    number = number & shifted_zero;
    int arr1[size] {0};
    std::cout << "it's the binary representation of reseted number\n";
    for(int i = 0; number > 0 || i < size; i++)
    {
        arr1[(size-1)-i] = number % 2;
        number /= 2;
        std::cout << arr1[i];
    } 

}

int main()
{
    int arr[32] {0};
    unsigned int number_copy = 0;
    unsigned int number = 0;
    const int size = 0;
    std::cout << "please enter your number\n";
    std::cin >> number;
    number_copy = number;
    std::cout << "it's the binary representation of your number\n";
    for(int i = 0; i < size || number_copy > 0; i++)
    {
        arr[(size-1)-i] = number_copy % 2;
        number_copy /= 2;
        std::cout << arr[i];
    }
    int bit = 0;
    std::cout << "what bit do you want to reset?\n";
    std::cin >> bit;
    reset(number, bit, size);
    system("pause");
    return 0;
}