/******************************************************************************

            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5

*******************************************************************************/

#include <stdio.h>

void fun(int n) {
    for(int i=1; i< n+1; i++) {
        
        for(int j=0;j<n-i;j++) {
            printf(" ");
        }
        for(int k=i; k>0; k--){
            printf("%d", k);
        }
        for(int k=2; k<i+1; k++){
            printf("%d", k);
        }
        printf("\n");
    }
}
int main()
{
    fun(5);

    return 0;
}