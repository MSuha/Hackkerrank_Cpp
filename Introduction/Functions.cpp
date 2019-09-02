#include <iostream>
#include <cstdio>

using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int max;

    max = d > (c > ((a > b) ? a : b) ? c : ((a > b) ? a : b)) ? d : (c > ((a > b) ? a : b) ? c : ((a > b) ? a : b));
    return max;
}

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", max_of_four(a, b, c, d));

    return 0;
}

