#include "SymmetricDate.hpp"
#include <sstream>
#include <iomanip>

bool SymmetricDate::isPalindrome(const std::string &s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; ++i)
        if (s[i] != s[n - 1 - i])
            return false;
    return true;
}

bool SymmetricDate::isValidDate(int d, int m, int y)
{
    if (m < 1 || m > 12)
        return false;

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool leap = (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
    if (leap && m == 2)
        return d >= 1 && d <= 29;

    return d >= 1 && d <= daysInMonth[m - 1];
}

std::vector<std::string> SymmetricDate::findSymmetricDates()
{
    std::vector<std::string> results;

    for (int y = 2001; y <= 2100; ++y)
    {
        for (int m = 1; m <= 12; ++m)
        {
            for (int d = 1; d <= 31; ++d)
            {
                if (!isValidDate(d, m, y))
                    continue;

                std::ostringstream oss;
                oss << std::setw(2) << std::setfill('0') << d;
                oss << std::setw(2) << std::setfill('0') << m;
                oss << std::setw(4) << std::setfill('0') << y;
                std::string dateStr = oss.str();

                if (isPalindrome(dateStr))
                {
                    std::ostringstream formatted;
                    formatted << std::setw(2) << std::setfill('0') << d << "-"
                              << std::setw(2) << std::setfill('0') << m << "-"
                              << std::setw(4) << std::setfill('0') << y;
                    results.push_back(formatted.str());
                }
            }
        }
    }

    return results;
}
