#include <stdio.h>
#define ROW 1000
#define COL 1000

void init_matrix(float m[][COL], int r, int c);
void product_scalar_matrix(float m[][COL], float s, float res[][COL], int r, int c);
void show_matrix(float m[][COL], int r, int c);

int main(){
    int rows, columns;
    float data[ROW][COL];
    float result[ROW][COL];
    float scalar;

    printf("Multiplicación de un matriz por un escalar");
    printf("Introduce las dimensiones de la matriz\n");
    printf("El número de filas: ");
    scanf("%d", &rows);
    printf("El número de columnas: ");
    scanf("%d", &columns);

    init_matrix(data, rows, columns);
    printf("Ingrese el número escalar :");
    scanf("%f", &scalar);

    product_scalar_matrix(data, scalar, result, rows, columns);
    printf("El resultado de multiplicación: \n");
    show_matrix(result, rows, columns);
    return 0;
}

void init_matrix(float m[][COL], int r, int c){
    int row, col;
    for(row = 0; row < r; row++ ){
        for(col = 0; col < c; col++){
            printf("Ingresar el número real en la posición[%d][%d]: ", row, col);
            scanf("%f", &m[row][col]);
        }
    }
}

void product_scalar_matrix(float m[][COL], float s, float res[][COL], int r, int c){
    int row, col;
    for(row = 0; row < r; row++ ){
        for(col = 0; col < c; col++){
            res[row][col] = m[row][col] * s;
        }
    }
}

void show_matrix(float m[][COL], int r, int c){
int row, col;
    for(row = 0; row < r; row++ ){
        for(col = 0; col < c; col++){
            printf("%.2f \t", m[row][col]);
        }
        printf("\n");
    }    
}