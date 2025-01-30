#pragma once

#include <vector>
#include <string>

class BigInt{
public:
    BigInt();
    BigInt(long long);

    void operator+=(BigInt&);
    BigInt operator+(BigInt&);

    int digitAt(int);
    std::string toString();

    // digits are kept in such order, that consecutive digits are responsible for 10^0, 10^1, 10^2, ...
    std::vector<char> digits; 
};