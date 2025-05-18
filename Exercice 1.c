#include <stdio.h>
#include <string.h>

int main() {
    int tab[10];
    int i;

    printf("Entrez les 10 entiers du tableau : \n");
    for(i=0 ; i<10 ; i++){
        printf("Entier %d : ",i+1);
        scanf("%d", &tab[i]);
    }

    printf("\nLes valeurs du tableau sont : \n");
    for(i=0 ; i<10 ; i++){
        printf("%d ",tab[i]);
    }

    return 0;
}

