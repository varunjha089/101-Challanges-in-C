/*Transpose of a matrix*/
#include <stdio.h>

#define ROWS    3
#define COLS    3

void create(int[ROWS][COLS]);
void display(int[ROWS][COLS]);
void transpose(int[ROWS][COLS], int[ROWS][COLS]);

int main(){
    int mat1[ROWS][COLS], mat2[ROWS][COLS];

    printf("Enter array Elements: \n");
    create(mat1);

    printf("Entered matris is: \n");
    display(mat1);

    transpose(mat1, mat2);
    printf("Transpose of a matrix: \n");
    display(mat2);

    return 0;
}

/*Create matrix mat*/
void create(int mat[ROWS][COLS]){
    int i, j;
    for(i = 0; i < ROWS; i++)
        for(j = 0; j < COLS; j++){
            printf("Enter the %d row, %d col Element: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    printf("\n");
}

/*Display the content of matrix TC = O(ROWS* COLS) */
void display(int mat[ROWS][COLS]){
    int i, j;
    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}

/*Obtain Transpose of Matrix m1. TC = O(ROWS*COLS) | SC = O(1)*/
void transpose(int m1[ROWS][COLS], int m2[ROWS][COLS]){
    int i, j;
    for(i = 0; i < ROWS; i++)
        for(j = 0; j < COLS; j++)
            m2[i][j] = m1[j][i];
}
