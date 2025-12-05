// pattern eg 3 : *
//               * * *
//              * * * * *
//                * * *
//                 *
#include <stdio.h>
int main(){
    int n, i, j, space;
    printf("Enter any integer: ");
    scanf("%d", &n);
    
    
    for(i = 1; i <= n; i++){
        
        for(space = i; space < n; space++){
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    
    // Lower half of the pattern
    for(i = n-1; i >= 1; i--){
        // Print leading spaces
        for(space = n; space > i; space--){
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}