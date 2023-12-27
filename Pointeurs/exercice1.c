/**
 * Créez une fonction qui prend un tableau d'entiers 
 * et renvoie la somme de ses éléments en utilisant des pointeurs.
 * */ 

#include "pointeur.h"
#include <stdio.h>
#include <stdlib.h>


// Fonction principale
int main(int argc, char** argv) {
    int tab[] = {0, 1}; // Déclaration et initialisation d'un tableau d'entiers avec deux éléments
    int size = sizeof(tab) / sizeof(tab[0]); // Calcul de la taille du tableau en nombre d'éléments

    int val = sum_array(tab, size); // Appel de la fonction sum_array pour calculer la somme des éléments
    printf("val = %d\n", val); // Affichage du résultat
    return 0; // Fin du programme
}
