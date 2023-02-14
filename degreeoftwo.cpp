//this programm will check is your number degree of two or not.
#include <iostream>
void two_degree(unsigned int number, const int size)
{
   
    int arr[size] {0};
    int one_collection = 0;
    std::cout << "this is your number's binary representation\n";
    for(int i = 0; i < size || number > 0; i++)
    {
        arr[(size-1)-i] = number % 2;
        number /= 2;
        std::cout << arr[i];
    }
    std::cout << "\n";
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 1)
        {
            one_collection++;
        }
    }
    if(one_collection == 1)
        {
            if(arr[(size-1)] == 1)
            {
                std::cout << "your number is degree of two.\n";
                std::cout << "your number is one.\n";
            }
            else
            {
                std::cout << "your number is degree of two\n";
            }
            
        }
    else 
    {
        std::cout << "your number isn't degree of two\n";
    }
}
int main()
{
    unsigned int number = 0;
    const int size = 32;
    std::cout << "please enter the number\n";
    std::cin >> number;
    two_degree(number , size);
    system("pause");
    return 0;

}