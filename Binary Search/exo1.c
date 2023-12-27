#include <stdio.h>
#include <math.h>

void binarySearchAlgorithm(int target, int numbers[], int size);

int main(int argc, char **argv) {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target;
    printf("What is the number target ? : ");
    scanf("%d", &target);
    int size = sizeof(numbers) / sizeof(numbers[0]);
    binarySearchAlgorithm(target, numbers, size);
}

void binarySearchAlgorithm(int target, int numbers[], int size) {
    int startLimit = 0;
    int endLimit = size - 1;

    while (startLimit <= endLimit) {
        int half = floor((startLimit + endLimit) / 2.0);
        if (numbers[half] < target) {
            startLimit = half + 1;
        } else if (numbers[half] > target) {
            endLimit = half - 1;
        } else {
            printf("Element trouvé à l'indice : %d\nÉlement : %d\n", half, numbers[half]);
            
            return;
        }
    }
    printf("Echec !!!\n");
}
