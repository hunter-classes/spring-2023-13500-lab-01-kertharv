/** 
* Spring 2023 - Lab 01
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Notes: The user is asked to enter two integers
* which will output the smaller of the two.
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