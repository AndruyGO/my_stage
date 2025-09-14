#include <stdio.h>
#include "menu.h"

int diff(const int* arr, int n){
    return max(arr, n) - min(arr, n);
}

