#include<stdio.h>

int main(){
    int j,m,a;
    char an[30];
    printf("entrer une anne sous la forme j/m/a\n");
    scanf("%s",an);
    if(an[3]=='0' && an[4]=='1')
        //printf("%c%c/janvier/%c%c%c%c",an[0],an[1],an[6],an[7],an[8],an[9]);
        printf("%c%c-janvier-%c%c%c%c", an[0], an[1], an[6], an[7], an[8], an[9]);
}