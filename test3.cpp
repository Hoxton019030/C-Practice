//
// Created by za546 on 2022/10/22.
//

#include <iostream>
#include "test3.h"

struct inflatable {
    char name[20];
    float volume;
    double price;
};


int main() {
//    inflatable *ps = new inflatable;
    using namespace std;
    inflatable *ps = new inflatable;
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume:　" << ps->volume << "cubic feet\n";
    cout << "Price : $" << ps->price << "\n";
    delete ps;
    return 0;

}
