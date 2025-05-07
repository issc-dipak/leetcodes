#include "SymmetricDate.hpp"
#include <iostream>

int main()
{
    SymmetricDate sd;
    std::vector<std::string> dates = sd.findSymmetricDates();
    for (const std::string &date : dates)
    {
        std::cout << date << std::endl;
    }
    return 0;
}
