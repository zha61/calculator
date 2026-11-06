#include <stdio.h>
#include <limits.h>


int add(int a, int b) {
    if (a == INT_MAX || b == INT_MAX){
        return 0;
    }
    else{
        return a + b;
    }
}

int sub(int a, int b) {
    return a - b;
}