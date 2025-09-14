#include <stdio.h>
#include "menu.h"

int A[100];

int main(){
    int op_type;
    char c;
    scanf("%d", &op_type);
    scanf("%c", &c);

    int n = 0;
    for(n = 0; 1; n++){
        scanf("%d", &A[n]);
        scanf("%c", &c);
        if(c == '\n') break;
    }
    n++;

    switch(op_type){
        case 0:
            printf("%d\n", max(A, n));
            break;
        case 1:
            printf("%d\n", min(A, n));
            break;
        case 2:
            printf("%d\n", diff(A, n));
            break;
        case 3:
            printf("%d\n", sum(A, n));
            break;
		deafult:
			printf("incorrect data\n");
    }
    return 0;
}
