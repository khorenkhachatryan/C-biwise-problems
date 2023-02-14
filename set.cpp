#include <iostream>
void set(unsigned int number, unsigned int bit, const int size)
{
    int shifted_one = 1;
    const int arr1[size] {0};
    shifted_one = (shifted_one << (bit - 1));
    number = number | shifted_one;
    std::cout << "it's the binary representation of seted number\n";
    for(int i = 0; number > 0 || i < 32; i++)
    {
        arr1[(size-1)-i] = number % 2;
        number /= 2;
        std::cout << arr1[i];
    }
    std::cout << "\n";
}

int main()
{
    unsigned int number = 0;
    const int size = 32;
    int arr[size] {0};
    unsigned int bit = 0;
    int number_copy = 0;
    std::cout << "enter the number\n";
    std::cin >> number;
    number_copy = number;
    std::cout << "it's the binary representation of your number\n";
    for(int i = 0; i < size || number_copy > 0; i++)
    {
        arr[(size-1)-i] = number_copy % 2;
        number_copy /= 2;
        std::cout << arr[i];
    }
    std::cout << "\n";
    std::cout << "what bit do you want to set\n";
    std::cin >> bit;
    set(number, bit, size);
    system("pause");
    return 0;
}