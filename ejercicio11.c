
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    for (int i = 0; i < tamaño; i++) { 
        if (*(arr + i) == valor) { 
            return (arr + i); 
        }
    }
    return NULL; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int tamaño = sizeof(arr) / sizeof(arr[0]); 
    int valorBuscado;

    printf("Ingrese el valor a buscar: ");
    scanf("%d", &valorBuscado);

    int *resultado = buscarElemento(arr, tamaño, valorBuscado);

    if (resultado != NULL) {
        printf("El valor %d fue encontrado en la dirección: %p\n", valorBuscado, (void*)resultado);
    } else {
        printf("El valor %d no fue encontrado en el arreglo.\n", valorBuscado);
    }

    return 0;
}