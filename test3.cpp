//
// Created by za546 on 2022/10/22.
//

#include <iostream>
#include <cstring>
#include "test3.h"

int main() {
    int SIZE = 30;
    char firstName[10];
    char lastName[10];
    std::cout << "Enter your first name: " << std::endl;
    std::cin.getline(firstName, 7);
    std::cout << "Enter your last name :" << std::endl;
    std::cin.getline(lastName,7);
    strcat(lastName,", ");
    strcat(lastName, firstName);
    std::cout <<"Here's the information in a single string :" << lastName << std::endl;



}
