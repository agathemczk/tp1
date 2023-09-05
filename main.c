#include <stdio.h>

int main() {
    int applePrice = 20 ;
    int sodaPrice = 30 ;
    int cakePrice = 40 ;

    int selectedPrice ;
    char choose ;

    printf("Choisir un produit. p pour pomme, s pour soda ou g pour gâteau\n");
    scanf("%c", &choose);

    if(choose == 'p') {
        selectedPrice = applePrice * 1.2 ;
    }

    if(choose == 's') {
        selectedPrice = sodaPrice * 1.2 ;
    }

    if (choose == 'g') {
        selectedPrice = cakePrice * 1.2;
    }

    printf("%d", selectedPrice) ;
}
