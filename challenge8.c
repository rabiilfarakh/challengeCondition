#include <stdio.h>

int main() {
    float moyenne;

    printf("Entrez la moyenne de l eleve : ");
    scanf("%f", &moyenne);

    if (moyenne < 10) {
        printf("Recalé\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("Mention passable\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("Mention assez bien\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("Mention bien\n");
    } else {
        printf("Mention très bien\n");
    }

    return 0;
}