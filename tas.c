

#include "tas.h"

#include <stdio.h>

int indicePere(int i) {
	return i/2;
}

int indiceGauche(int i) {
	return 2*i;
}

int indiceDroite(int i) {
	return 2*i + 1;
}

void echange(int *tab, int indice1, int indice2) {
	int tmp = tab[indice1];
	tab[indice1] = tab[indice2];
	tab[indice2] = tmp;
}

void afficher(int *tab) {
	int i = 0;
	printf("(%d)-", tab[0]);
	for (i = 1; i < tab[0]+1; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");
}

void insertion(int *tab, int valeur) {

	printf("in insertion()\n");

	// on place l'élément à la position libre la plus à droite sur le dernier niveau,
	//  càd à la fin du tableau
	int indiceCourant = tab[0]+1;
	tab[indiceCourant] = valeur;
	tab[0]++;
	afficher(tab);

	int pere = indicePere(indiceCourant);
	printf(" indicePere=%d\n", pere);

	// tant qu'on a besoin de remonter ET qu'on est pas tout en haut
	while (tab[pere] > tab[indiceCourant] && indiceCourant > 1) {

		echange(tab, indiceCourant, pere);
		indiceCourant = pere;
		pere = indicePere(indiceCourant);
		printf("   indicePere=%d\n", pere);
		printf("  tab après echange() : ");
		afficher(tab);
	}

	printf("tab après insertion : ");
	afficher(tab);
}



