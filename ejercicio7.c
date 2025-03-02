#include <stdio.h>
// 7. Accediendo a la Memoria

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("Dirección de memoria de arr[%d]: %p\n", i, (void*)&arr[i]);
    }

    return 0;
}