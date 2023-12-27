#include <stdio.h>
#include <stdlib.h>

void swap (int a, int b){
    int *tmp;
    int *ptrA = &a; //ptrA qui pointe vers l'adresse de a, *ptrA est la valeur de la variable pointé
    int *ptrB = &b; //ptrB qui pointe vers l'adresse de a, *ptrB est la valeur de la variable pointé

    // les adresses des pointeurs pointent les unes vers les autres  
    tmp = ptrA; 
    ptrA = ptrB;
    ptrA= tmp;

    printf("swapping a = %d b = %d\n",*ptrA , *ptrB);
}


// Déclaration du prototype de la fonction sum_array avec deux paramètres : le tableau et sa taille
int sum_array(int tab[], int size);

// Définition de la fonction sum_array
int sum_array(int tab[], int size) {
    int *ptr_array = tab; // Déclaration et initialisation d'un pointeur vers le premier élément du tableau
    int sum = 0; // Initialisation de la variable sum à zéro, elle stockera la somme des éléments du tableau

    // Boucle for pour parcourir les éléments du tableau
    for (int i = 0; i < size; i++) {
        sum += *ptr_array; // Ajoute la valeur pointée par le pointeur à la variable sum
        ptr_array++; // Incrémente le pointeur pour pointer vers l'élément suivant du tableau
    }

    return sum; // Retourne la somme calculée
}

void getValueWithMAlloc(int size_allouer){
    int *dynamicArray = (int *)malloc(size_allouer * sizeof(int));

    for(int i = 0; i < size_allouer; i++){
        printf("scanner les valeur ");
        scanf("%d", &dynamicArray[i]);
    }

    for(int i = 0; i < size_allouer; i++){
        printf("Lest valeurs du tableau dynamique --> %d",dynamicArray[i]);
    }
    printf("\n");

    free(dynamicArray);
}
