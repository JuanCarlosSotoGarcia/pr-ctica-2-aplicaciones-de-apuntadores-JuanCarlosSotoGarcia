#include <stdio.h>
// 10. Ordenamiento con Apuntadores (Burbuja)

// Función para ordenar un arreglo usando el algoritmo de burbuja
void ordenarBurbuja(int *arr, int tamaño) {
    for (int i = 0; i < tamaño - 1; i++) { 
        for (int j = 0; j < tamaño - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) { 
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    int tamaño = sizeof(arr) / sizeof(arr[0]); 

    printf("Arreglo antes de ordenar: ");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ordenarBurbuja(arr, tamaño);
    
    printf("Arreglo después de ordenar: ");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}