#include "./headers/BigNums.h"
#include <iostream>

int main(){
    BigInt bi(100ll);
    std::cout<<bi.toString()<<std::endl;
}