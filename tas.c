
#include "time.h"

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

void insertion(int *tab, int valeur) {


	// on place l'élément à la position libre la plus à droite sur le dernier niveau,
	//  càd à la fin du tableau
	int indiceCourant = tab[0]+1;
	tab[indiceCourant] = valeur;

	tab[0]++;

	int pere = indicePere(indiceCourant);

	while (tab[pere] > tab[indiceCourant]) {
		echange(tab, indiceCourant, pere);
	}
}



