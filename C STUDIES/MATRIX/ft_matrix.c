#include <stdio.h>
#include <stdlib.h>

// create zero initialized matrix
int** callocMatrix(int rmax, int colmax) {
    int **mat = calloc(rmax, sizeof(int*));
    for(int i = 0; i < rmax; i++) mat[i] = calloc(colmax, sizeof(int));
    return mat;
}

// fill matrix
void setMatrix(int **mat, int r, int c){
    printf("Insira os elementos da sua matriz:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Insira o elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]); // no problem here
            printf("matriz[%d][%d]: %d\n", i, j, mat[i][j]);
        }
    }
}

// print matrix
void printMatrix(int **mat, int r, int c){

    for (int i=0; i<r;i++){
        for (int j=0; j<c;j++) {
                printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(void) {

    int r = 3, c = 3;

    int **mat = callocMatrix(r, c);


     setMatrix(mat, r, c);

     printMatrix(mat, r, c);
}