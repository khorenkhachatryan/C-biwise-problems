//this programm will return the count of ones in bitsystem of given number.
#include <iostream>
void count_of_ones_are_odd_or_even(unsigned int number, const int size)
{
    int count_of_ones = 0;
    double odd_or_even = 0;
    for(int i = 0; i < size; i++)
    {
        if((number & 1) == true)
        {
            count_of_ones++;
            number >> i;
        }
    }
   if((count_of_ones % 2) > 0)
   {
    std::cout << "the count of ones is odd\n";
   }
   else 
   {
    std::cout << "the count of ones  is even\n";
   }
}
int main()
{
    unsigned int number = 0;
    const int size = 32;
    std::cout << "please enter the number\n";
    std::cin >> number;
    int arr[size] {0};
    unsigned int number_copy = number;
    std::cout << "it's a binary representation of your number\n";
    for(int i = 0; number_copy > 0 || i < size; i++)
    {
        arr[(size-1)-i] = number_copy % 2;
        number_copy /= 2;
        std::cout << arr[i];
    }
    std::cout << "\n";
    count_of_ones_are_odd_or_even(number, size);
    system("pause");
    return 0;
}