#include<stdio.h>

int main(){
    char c;

    printf("entrer un caractere: ");
    scanf("%c",&c);
    if(c>='a' && c<='z')
        printf("%c est miniscule",c);
    else if(c>='A' && c<='Z')
        printf("%c est majuscule",c);
    else
        printf("%c est un chiffre",c);
}