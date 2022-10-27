//
// Created by za546 on 2022/10/23.
//

#include "problem.h"
#include <iostream>

int main() {
    using namespace std;
    int test[10];
    *(test+1) = {2};
    // test =記憶體位址的起點
    cout << *(test+1);
    cout << &test[1];
}
