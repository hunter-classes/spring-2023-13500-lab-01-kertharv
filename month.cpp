/** 
* Spring 2023 - Lab 01
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
* Asssignment: Lab 1D
* Asks the user to input the year and the month (1-12) and 
* prints the number of days in that month (taking into account leap years).
*/

#include <iostream>

int main()
{
    int y;
    int m;

    std::cout << "Enter year: ";
    std::cin >> y;
    std::cout << "Enter month: ";
    std::cin >> m;

    if ((m == 2) && (y % 400 == 0) || ((y % 1000 != 0) && (y % 4 == 0)))
    {
        std::cout << "29 days" << std::endl;
    }

    else if (m == 2)
    {
        std::cout << "28 days" << std::endl;
    }

    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) 
    {
        std::cout << "31 days" << std::endl;
    }

    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        std::cout << "30 days" << std::endl;
    }
    else
    {
        std::cout << "Did you enter a negative or a number bigger than 12 months? Try again." << std::endl;
    }

    return 0;


}