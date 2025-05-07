#ifndef SYMMETRICDATE_HPP
#define SYMMETRICDATE_HPP

#include <vector>
#include <string>

class SymmetricDate {
public:
    std::vector<std::string> findSymmetricDates();
    bool isPalindrome(const std::string& s);
    bool isValidDate(int d, int m, int y);
};

#endif
