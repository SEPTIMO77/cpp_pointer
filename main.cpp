#include <stdio.h>
#include <iostream>

using namespace std;

void incrementValue(int *n) {
    *n = *n + 1;
}

int main() {
    int x = 7;
    incrementValue(&x);

    printf("x = $d\n", x);
    cout << "number: " << x << endl;

    
    return 0;
}