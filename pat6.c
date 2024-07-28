/******************************************************************************

         *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
        * *
         *

*******************************************************************************/


#include <stdio.h>

void funType1(int n) {
    for(int i=0; i< n; i++) {
        for(int j=0;j<n-i-1;j++) {
            printf(" ");
        }
        for(int k=0; k<i+1; k++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=n-1; i>0; i--) {
        for(int j=1;j<n-i+1;j++) {
            printf(" ");
        }
        for(int k=1; k<i+1; k++){
            printf("* ");
        }
        printf("\n");
    }
}

void funType2(int n) {
    for(int i=0; i< (2*n); i++) {
        int totalColinRow = i>n?(2*n-i):i;
        int noOfSpaces = n- totalColinRow;
        
        for(int j=0;j<noOfSpaces;j++) {
            printf(" ");
        }
        for(int k=0; k<totalColinRow; k++){
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    funType1(5);
    funType2(5);
    return 0;
}


