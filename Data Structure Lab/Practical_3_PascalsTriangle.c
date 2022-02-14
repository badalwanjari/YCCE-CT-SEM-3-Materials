#include <stdio.h>
//  a triangular arrangement of numbers that gives the coefficients in the expansion of any binomial expression
int main(){
    int rows, coef = 1, space, i, j;
    
    printf("\nEnter the number of rows: ");
    
    scanf("%d", &rows); 
    for (i = 0; i < rows; i++){
        for (space = 1; space <= rows - i; space++){
            printf(" ");
        }
        for (j = 0; j <= i; j++){
            if (j == 0 || i == 0){
                coef = 1;
            }
            else{
                coef = coef * (i - j + 1) / j;
            }
            printf("%d ", coef);
        }
        printf("\n");
    }
    return 0;
}