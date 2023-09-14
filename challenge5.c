#include <stdio.h>

int main() {
    int annee;
    int choix;
    int mois, jours, heures, minutes, secondes;

    printf("Entrer une annee : ");
    scanf("%d", &annee);

    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            mois = annee * 12;
            printf("%d annees est equivalent a %d mois.\n", annee, mois);
            break;
        case 2:
            jours = annee * 365;
            printf("%d annees est equivalent a %d jours.\n", annee, jours);
            break;
        case 3:
            jours = annee * 365;
            heures = jours * 24;
            printf("%d annees est equivalent a %d heures.\n", annee, heures);
            break;
        case 4:
            jours = annee * 365;
            heures = jours * 24;
            minutes = heures * 60;
            printf("%d annees est equivalent a %d minutes.\n", annee, minutes);
            break;
        case 5:
            jours = annee * 365;
            heures = jours * 24;
            minutes = heures * 60;
            secondes = minutes * 60;
            printf("%d annees est equivalent a %d secondes.\n", annee, secondes);
            break;
        default:
            printf("Option invalide. Veuillez choisir une option valide.\n");
    }

    return 0;
}






