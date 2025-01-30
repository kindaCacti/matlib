#include "./headers/BigNums.h"
#include <iostream>

int main(){
    BigInt bi(103ll);
    BigInt bi2(999ll);
    bi += bi2;
    std::cout<<bi.toString()<<std::endl;
}