#include <stdio.h>
#include "menu.h"

int sum(const int* arr, int n){
    int Min = 1e9, Mini=0;
    for(int i = 0; i < n; i++){
        if(arr[i] < Min){
            Min = arr[i];
            Mini = i;
        }
    }

    int Sum = 0;
    for(int i = 0; i < Mini; i++){
        Sum += arr[i];
    }

    return Sum;
}

