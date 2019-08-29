#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int nmbr;
    long lng;
    char chr;
    float flt;
    double dbl;

    //cin >> nmbr >> lng >> chr >> flt >> dbl;
    //cout << nmbr << "\n" << lng << "\n" << chr << "\n" << flt << "\n" << dbl;


    /* scanf and printf are faster then cin and cout */
    scanf("%d %ld %c %f %lf", &nmbr, &lng, &chr, &flt, &dbl);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", nmbr, lng, chr, flt, dbl);

    return 0;
}

