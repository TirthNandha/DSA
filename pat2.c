/******************************************************************************

    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *

*******************************************************************************/

#include <stdio.h>

void fun(int n) {
    for(int i=0; i< n; i++) {
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n; i>0 ; i--) {
        for(int j=i; j>0; j--){
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    fun(5);

    return 0;
}