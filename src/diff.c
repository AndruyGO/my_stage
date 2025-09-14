#include <stdio.h>
#include "diff.h"

int diff(const int* arr, int n){
    return max(arr, n) - min(arr, n);
}

