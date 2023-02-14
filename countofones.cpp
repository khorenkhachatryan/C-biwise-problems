//this programm will give the count of one in bitsystem.
#include <iostream>
int binar_cmp(int number, const int size)
{
    int count_of_ones = 0;
    int one = 1;
    for(int i = 0; i < size; i++)
    {
        if((number & one) == 1)
        {
            count_of_ones++;
        }
        number >>= 1;
        
    }
    return count_of_ones;
}
    



int main()
{
    int number = 0;
    const int size = 32;
    std::cout << "enter the number\n";
    std::cin >> number;
    std::cout << binar_cmp(number, size) << std::endl;
    system("pause");
    return 0;
}