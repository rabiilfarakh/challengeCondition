#include<stdio.h>

int main(){
    int nbr;

    printf("entrer un nbr: ");
    scanf("%d",&nbr);
    if(nbr%2==0)
        printf("pair");
    else
        printf("implair");


}