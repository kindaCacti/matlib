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

void BigInt::operator+=(BigInt& right){
    int carry = 0;
    std::vector<char>& smaller_number = digits;
    std::vector<char>& bigger_number = right.digits;

    if(smaller_number.size() > bigger_number.size()) swap(smaller_number, bigger_number);
    
    for(int i = 0; i<smaller_number.size(); i++){
        char tmp = smaller_number[i] + bigger_number[i] + carry;
        carry = tmp / 10;
        digits[i] = tmp % 10;
    }

    for(int i = smaller_number.size(); i < bigger_number.size(); i++){
        char tmp = bigger_number[i] + carry;
        carry = tmp / 10;

        if(digits.size() <= i) digits.push_back(0);
        digits[i] = tmp % 10;
    }

    if(carry) digits.push_back(carry);
}

BigInt BigInt::operator+(BigInt& right){
    BigInt tmp(*this);
    tmp += right;
    return tmp;
}

std::string BigInt::toString(){
    std::string out = "";
    for(int i = digits.size() - 1; i>=0; i--){
        out.push_back(digits[i] + '0');
    }
    return out;
}

//gives the digit, which is responsible for (digit) * (base)^(position)
int BigInt::digitAt(int position){
    return digits[position];
}
