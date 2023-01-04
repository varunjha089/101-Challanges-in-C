/*Binary Equivalent of Decimal using Recursion*/
#include <stdio.h>

void dec_to_binary(int);

int main(){
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("The binary equivalent is: ");
    dec_to_binary(num);
    printf("\n");

    return 0;
}

void dec_to_binary(int n){
    int r;
    r = n%2;
    n = n/2;
    if(n != 0)
        dec_to_binary(n);
    
    printf("%d", r);
}