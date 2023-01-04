/*Generate first 25 Fibonacci Sequence*/
#include <stdio.h>

void fibonacci(int, int, int);

int count = 3;

int main(){
    int i, t, num;
    int old=1, current=1;

    printf("Please enter a number\n");
    scanf("%d", &num);

    printf("Fibonacci of 1 is %d\nFibonacci of 2 is %d\n", old, current);
    fibonacci(old, current, num-2);

    return 0;
}

void fibonacci(int old, int current, int num){
    // int new=0;

    if(num >= 1){
        int new_val = old + current;
        printf("Fibonacci of %d is %d\n", count, new_val);
        num -= 1;
        count++;
        fibonacci(current, new_val, num);
    }
}