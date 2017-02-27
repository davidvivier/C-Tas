#include <stdlib.h>
#include <stdio.h>

#include "tas.h"

int main() {

	int tab[] = {3,5,6,2,8,9,11,7,4,10,12,15,20,1,19,13,17};
	int taille_tab = 17;


	int tab_tas[18] ; // Creation du tableau qui sert à stockert le tas
	tab_tas[0] = 0;

	int i = 0;
	for (i = 0; i < taille_tab; i++) {
		printf("insertion de %d\n", tab[i]);
		insertion(tab_tas, tab[i]);
	}

	printf("tableau final : ");
	afficher(tab_tas);

	return 0;
}
