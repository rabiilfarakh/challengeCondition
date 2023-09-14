#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int a;
    a=rand()%7 + 1;

    if(a==1)
        printf("lundi");
    if(a==2)
        printf("mardi");
    if(a==3)
        printf("mercredi");
    if(a==4)
        printf("jeudi");
    if(a==5)
        printf("vendredi");
    if(a==6)
        printf("samedi");
    if(a==7)
        printf("dimanche");
}