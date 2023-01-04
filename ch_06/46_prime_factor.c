/*Finding Prime Factor of a Number Recursively*/
#include <stdio.h>

void factorise(int, int);

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors are:\n");
    factorise(num, 2);
    return 0;
}

void factorise(int n, int i){
    if(i <=n ){
        if(n%i == 0){
            printf("%d\n", i);
            n = n/i;
        }
        else{
            i++;
        }

        factorise(n, i);
    }
}