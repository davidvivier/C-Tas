
#ifndef INCLUDE_TAS_H
#define INCLUDE_TAS_H

/*
*	entrée : entier - indice de l'élément courant
*	sortie : entier - indice du père de l'élément courant
*	Calcule l'indice du père dans le tableau à partir de l'indice courant
*/
int indicePere(int i);

/*
*	entrée : entier - indice de l'élément courant
*	sortie : entier - indice du fils gauche de l'élément courant
*	Calcule l'indice du fils gauche dans le tableau à partir de l'indice courant
*/
int indiceGauche(int i);

/*
*	entrée : entier - indice de l'élément courant
*	sortie : entier - indice du fils droite de l'élément courant
*	Calcule l'indice du fils droit dans le tableau à partir de l'indice courant
*/
int indiceDroite(int i);

/*
*	entrée/sortie : tableau d'entier  tab - tableau qui contient le tas
*	entrée : entier indice1 - l'indice du premier élément à échanger
*	entrée : entier indice2 - l'indice du deuxième élément à échanger
*	Echange deux éléments dans le tas
*/
void echange(int *tab, int indice1, int indice2);

/*
*	entrée : tableau d'entier  tab - tableau qui contient le tas
*	sortie : Affiche le tableau qui contient le tas (le premier élément du tableau correspond à sa taille)
*	Affiche le tableau qui contient le tas (le premier élément du tableau correspond à sa taille)
*/
void afficher(int *tab);

/*
*	entrée/sortie : tableau d'entier  tab - tableau qui contient le tas
*	entrée : entier valeur - contient la valeur à insérer dans le tas
*	Insère un élément dans le tas à la bonne position
*/
void insertion(int *tab, int valeur);

/*
*	entrée/sortie : tableau d'entier  tab - tableau qui contient le tas
*	sortie : entier - la valeur de l'élément supprimé
*	Supprime l'élément au sommet du tas et le réorganise
*/
int destruction(int *tab);

#endif