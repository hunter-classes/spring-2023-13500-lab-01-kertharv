/** 
* Spring 2023 - Lab 01
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
* Asssignment: Lab 1A
* Asks the user to input two integer numbers and prints out the smaller of the two.
*/

#include <iostream>

int main()
{
    int firstn;
    int secondn;

    std::cout << "Enter the first number: ";
    std::cin >> firstn;
    std::cout << "Enter the second number: ";
    std::cin >> secondn;

    if (firstn > secondn)
    {
        std::cout << "The smaller of the two is: " << firstn << std::endl;
    }

    else if (secondn > firstn)
    {
        std::cout << "The smaller of the two is: " << secondn << std::endl;
    }

    else
    {
        std::cout << "The numbers are the same." << std::endl;
    }

    return 0;


}