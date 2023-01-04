/*Sum of first n natural numbers using Recursion*/
#include <stdio.h>

int Sum(int);

int main(){
    int max, sum;

    printf("Enter a positive natural number: \n");
    scanf("%d", &max);

    if (max >0){
        sum = Sum(max);
        printf("Sum of first %d natural numbers is %d\n",max, sum);
    }else{
        printf("Entered number is negative\n");
    }

    return 0;
}

int Sum(int n){
    int s;

    if (n == 0){
        return 0;
    }else{
        return (n + Sum(n-1));
    }
}