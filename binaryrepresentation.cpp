//binary representation of given number.
#include <iostream>
void binary_function(int number, const int size)
{
    int arr[size] {};
    for(int i = 0; number > 0 && i < size; i++)
    {
        arr[(size-1)-i] = number % 2;
        number /= 2;

    }
    std::cout << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
    std::cout << "\n";
}
int main()
{
    int number = 0;
    const int size = 32;
    std::cin >> number;
    binary_function(number, size);
    system("pause");
    return 0;
}