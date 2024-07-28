#include <stdio.h>

/*

    *****
    *****
    *****
    *****
    *****

*/

void fun(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
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