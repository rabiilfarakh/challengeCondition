#include<stdio.h>

int main(){
    int nbr;

    printf("entrer un nbr: ");
    scanf("%d",&nbr);
    if(nbr>0)
        printf("positif");
    else if(nbr<0)
        printf("negatif");
    else
        printf("null");
}