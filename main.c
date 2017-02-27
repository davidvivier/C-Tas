/********************************************************************/
/*** VIVIER David													*/
/*** VARAGNAT Kévin													*/
/*** 27/02/2017											            */
/*** Exécuter ./main pour utiliser le programme 					*/
/*** Make clean pour supprimer l'éxécutable et les fichiers .o      */
/********************************************************************/

#include <stdlib.h>
#include <stdio.h>

#include "tas.h"

int main() {

	int tab[] = {3,5,6,2,8,9,11,7,4,10,12,15,20,1,19,13,17}; // tableau qui contient les valeurs intitiales
	int taille_tab = 17;


	int tab_tas[18] ; // Creation du tableau qui sert à stocker le tas
	tab_tas[0] = 0; // la case d'indice 0 sert à stocker le nombre d'éléments dans le tas

	int i = 0;
	for (i = 0; i < taille_tab; i++) {
		//printf("insertion de %d\n", tab[i]);
		insertion(tab_tas, tab[i]); // on insert tous les éléments dans le tas
	}

	printf("tas construit : ");
	afficher(tab_tas);

	for (i = 1; i <= taille_tab; i++) {
		int valeur = destruction(tab_tas); // on détruit les éléments du tas un par un
		printf("valeur retiree : %d\n", valeur);
	}

	return 0;
}
