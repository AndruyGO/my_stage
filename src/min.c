#include <stdio.h>
#include "min.h"

int min(const int *arr, int n){
    int Min = 1e9;
    for(int i = 0; i < n; i++){
        if(arr[i] < Min){
            Min = arr[i];
        }
    }
    return Min;
}

