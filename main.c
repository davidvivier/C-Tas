#include <stdlib.h>
#include <stdio.h>

#include "tas.h"

int main() {

	int tab[17] ; // Creation du tableau qui sert à stockert le tas
	tab[0] = 0;


	
	insertion(tab , 3);
	insertion(tab , 5);
	insertion(tab , 6);
	insertion(tab , 2);

	printf("tableau final : ");
	afficher(tab);

	return 0;
}
