/** 
* Spring 2023 - Lab 01
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
*/

#include <iostream>

int main()
{
    int y;

    std::cout << "Enter year: ";
    std::cin >> y;

    if (y % 4 != 0)
    {
        std::cout << "It is a common year." << std::endl;
    }

    else if (y % 100 != 0)
    {
        std::cout << "It is a leap year." << std::endl;
    }

    else if (y % 400 != 0) 
    {
        std::cout << "It is a common year." << std::endl;
    }

    else
    {
        std::cout << "It is a leap year." << std::endl;
    }

    return 0;


}