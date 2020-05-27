#include <stdio.h>
#include <stdlib.h>

void init_array(int a[], int n);
void show_array(int a[], int n);
void bubble(int a[], int n);

int main(){
    int size;
    printf("Ingresa el tamaño del arreglo: " );
    scanf("%d", &size);

    int numbers[size];

    init_array(numbers, size);
    //show_array(numbers, size);
    bubble(numbers, size);
    printf("-------------------\n");
    show_array(numbers, size);

    return 0;
}

void init_array(int a[], int n){
    int i;
    for ( i = 0; i < n ; i++)
    {
        //variable = limite_inferior + rand() %
        // (limite_superior +1 - limite_inferior) ;
        a[i] = 1 + rand() % 1000;
    }
   
}

void show_array(int a[], int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    
}

void bubble(int a[], int n){
    int i, j;
    for (j = 0; j < n; j++){
        int lim = n - 1 - j;
        for(int i = 0; i < lim ; i++){
            if (a[i] > a[i + 1]){
            int aux = a[i];
            a[i] = a[i + 1];
            a[i + 1] = aux;
        }
    }
    }
    
    
}