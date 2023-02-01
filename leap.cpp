/** 
* Spring 2023 - Lab 01
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
* Asssignment: Lab 1C
* asks the user to input an integer representing a year number (1999, 2016, etc.). 
* If the input year is a leap year according to the modern Gregorian calendar, 
* it should print Leap year, otherwise, print Common year
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