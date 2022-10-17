//
// Created by za546 on 2022/10/17.
//

#include "addpntrs.h"
#include <iostream>

int main() {
    using namespace std;
    double wages[3] = {1000,2000,3000};
    short stack[3] = {3,2,1};

    double* pw=wages;
    short* ps = &stack[0];

    cout << "pw =" << pw << ", *pw= " << *pw <<endl;
    pw =pw+1;
    cout << "add 1 to the pw point:\n";
    cout << " pw= " << pw << ", *pw =" << *pw << "\n\n";
    cout << "ps = " << ps << ", *ps =" << *ps <<endl;

    cout << "access two element with array notation\n";
    cout << "stack[0] =" << stack[0]
    << ", stack[1] =" << stack[1] <<endl;

    cout << "access two elements with pointer notation \n";
    cout << "*stacks = " << *stack
    << ",*(stacks +3) =" << *(stack+5) <<endl;


    cout <<sizeof (wages) << " = size of wages array\n";
    cout << sizeof (pw) << " = size of pw pointer\n";
    return 0;

}
