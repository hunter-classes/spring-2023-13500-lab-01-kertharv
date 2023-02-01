/** 
* Spring 2023 - Lab 01
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
* Asssignment: Lab 1B
* Asks the user to input three integer numbers, and prints out the smallest of the three.
*/

#include <iostream>

int main()
{
    int firstn;
    int secondn;
    int thirdn;

    std::cout << "Enter the first number: ";
    std::cin >> firstn;
    std::cout << "Enter the second number: ";
    std::cin >> secondn;
    std::cout << "Enter the third number: ";
    std::cin >> thirdn;

    if (secondn > firstn && firstn < thirdn)
    {
        std::cout << "The smallest of the three is " << firstn << std::endl;
    }

    else if (firstn > secondn && secondn < thirdn)
    {
        std::cout << "The smallest of the three is: " << secondn << std::endl;
    }
    
    else if (firstn > thirdn && thirdn < secondn)
    {
        std::cout << "The smallest of the three is: " << thirdn << std::endl;
    }

    else
    {
        std::cout << "The numbers are equal." << std::endl;
    }

    return 0;
}