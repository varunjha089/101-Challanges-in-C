/*Recursive Factorial of a number*/
#include <stdio.h>

int factorial(int);

int main(){
    int num, fact;

    printf("Enter any number: \n");
    scanf("%d", &num);

    fact = factorial(num);
    printf("Factorial of %d is %d\n", num, fact);
    
    return 0;
}

int factorial(int num){
    // int p;

    if (num == 0){
        return(1);
    }
    else{
        return (num*factorial(num-1));
    }
}