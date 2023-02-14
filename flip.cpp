#include <iostream>
void flip(unsigned int number, unsigned int bit, const int size)
{
    int arr1[size] {0};
    int shifted_one = 0;
    shifted_one = 1 << (bit -1);
    number = number ^ shifted_one;
    std::cout << "it's the binary representation of your fliped number.\n";
    for(int i = 0; number > 0 || i < size; i++)
    {
        arr1[(size-1)-i] = number % 2;
        number /= 2;
        std::cout << arr1[i];
    }

}

int main()
{
    unsigned int number = 0;
    unsigned int bit = 0;
    const int size = 32;
    std::cout << "enter the number\n";
    std::cin >> number;
    int arr[size] {0};
    unsigned int number_copy = 0;
    number_copy = number;
    std::cout << "it's the binary representation of your number.\n";
    for(int i = 0; i < size || number_copy > 0; i++)
    {
        arr[(size-1)-i] = number_copy % 2;
        number_copy /= 2;
        std::cout << arr[i];
    }
    std::cout << "what bit do you want to flip?\n";
    std::cin >> bit;
    flip(number, bit, size);
    system("pause");
    return 0;
}