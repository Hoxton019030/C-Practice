//
// Created by za546 on 2022/10/22.
//

#include <iostream>
#include "array.h"
int main() {
    using namespace std;
    double wages[3] = {10000, 20000, 30000};
    short stacks[3] = {3, 2, 1};ㄅ
    double* pw = wages;
    short*  ps = &stacks[0];
//    cout << wages;
    cout << *(stacks)+1;
    cout << 123;



}

