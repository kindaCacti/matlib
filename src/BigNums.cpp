#include "./headers/BigNums.h"

BigInt::BigInt(){
    digits.clear();
    digits.push_back(0);
}

BigInt::BigInt(long long value){
    digits.clear();
    while(value){
        digits.push_back(value%10);
        value /= 10;
    }
}

std::string BigInt::toString(){
    std::string out = "";
    for(int i = digits.size() - 1; i>=0; i--){
        out.push_back(digits[i] + '0');
    }
    return out;
}

int BigInt::digitAt(int position){
    return digits[position];
}