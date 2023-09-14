#include<stdio.h>
#include<math.h>
int main(){
    int a,b,s;

    printf("entrer le premier nbr: ");
    scanf("%d",&a);
    printf("entrer le deuxieme nbr: ");
    scanf("%d",&b);
    s=a+b;
    if(a==b)
        s*=3;
    printf("la somme est %d",s);

}