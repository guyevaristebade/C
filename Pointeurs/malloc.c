#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamicArray;
    int size;

    // Demande à l'utilisateur la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &size);

    // Allocation dynamique de mémoire pour le tableau
    dynamicArray = (int *)malloc(size * sizeof(int));

    // Vérification de l'allocation de mémoire
    if (dynamicArray == NULL) {
        printf("Erreur d'allocation de mémoire.\n");
        return 1; // Quitte le programme avec un code d'erreur
    }

    // Saisie des valeurs dans le tableau
    printf("Saisissez %d valeurs pour le tableau :\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &dynamicArray[i]);
    }

    // Affichage des valeurs à l'aide des pointeurs
    printf("Valeurs dans le tableau :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Libération de la mémoire allouée dynamiquement
    free(dynamicArray);

    return 0;
}