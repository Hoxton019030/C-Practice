//
// Created by za546 on 2022/10/17.
//

#include "test.h"

#include <iostream>

int main() {
    using namespace std;
//    int* ps = new int;
//    *ps =10;
//    int* pd = ps;
//    cout << pd << *ps <<endl;
//    cout << ps << *pd <<endl;
//    cout << *ps;
    int *psome = new int[10];
    cout << *psome;

    delete []psome;


}
