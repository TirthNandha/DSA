/******************************************************************************

         *
        **
       ***
      ****
     *****

*******************************************************************************/

#include <stdio.h>

void fun(int n) {
    for(int i=0; i< n; i++) {
        for(int j=0;j<n-i-1;j++) {
            printf(" ");
        }
        for(int k=n-i-1; k<n; k++){
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