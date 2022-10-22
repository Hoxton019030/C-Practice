//
// Created by za546 on 2022/10/22.
//

#include <iostream>
#include <cstring>
#include "pointMath.h"

int main() {
    using namespace std;

    char animal[20] = "bear";
    const char* bird = "wren";
    char* ps;

    cout << animal << " and ";
    cout << bird << "\n";
    cout << ps << "\n";

    cout << "Enter a kind of animal";
    cin >> animal;

    ps = animal;
    cout << ps << "s!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (double *) animal << endl;
    cout << ps << " at " << (int *) ps <<endl;

    ps = new char[strlen(animal)];
    strncpy(ps, animal,19);
    cout << "After using strcpy() :\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;
    return 0;


}
