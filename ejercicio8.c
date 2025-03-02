#include <stdio.h>
// Intercambio de Valores


void intercambiar(int *a, int *b) {
    int temp = *a; 
    *a = *b;     
    *b = temp;     
}

int main() {
    int arr[] = {5, 10};

    printf("Antes del intercambio: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);

    intercambiar(&arr[0], &arr[1]);

    printf("Después del intercambio: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);

    return 0;
}