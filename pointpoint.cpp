//
// Created by za546 on 2022/10/22.
//

#include "pointpoint.h"

struct antarctica_years_end {
    int year;

};

int main() {
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end *pa = &s03;
    pa->year = 1998;
    antarctica_years_end trio[3];
    trio[0].year = 2003;

    const antarctica_years_end *arp[3] = {&s01, &s02, &s03};
    const antarctica_years_end** ppa = arp;
}
