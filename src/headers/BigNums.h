#pragma once

#include <vector>
#include <string>

class BigInt{
public:
    int digitAt(int);
    std::string toString();
    BigInt();
    BigInt(long long);
private:
    std::vector<char> digits; // digits are kept in reverse order for the ease of doing operations
};