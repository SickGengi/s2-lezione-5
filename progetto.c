#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void menu() {
    printf("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
    printf("Come posso aiutarti?\n");
    printf("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");
}

void moltiplica() {
    int a, b;
    char input[20];

    printf("Inserisci il primo numero da moltiplicare:\n");

    while (1) {
        printf("Numero 1: ");
        if (fgets(input, sizeof(input), stdin) != NULL) {
            if (sscanf(input, "%d", &a) == 1) {
                break; // Esci dal ciclo se l'input è un numero valido
            } else {
                printf("Input non valido. Inserisci un numero valido.\n");
            }
        }
    }

    printf("Inserisci il secondo numero da moltiplicare:\n");

    while (1) {
        printf("Numero 2: ");
        if (fgets(input, sizeof(input), stdin) != NULL) {
            if (sscanf(input, "%d", &b) == 1) {
                break; // Esci dal ciclo se l'input è un numero valido
            } else {
                printf("Input non valido. Inserisci un numero valido.\n");
            }
        }
    }

    int prodotto = a * b;
    printf("Il prodotto tra %d e %d è: %d\n", a, b, prodotto);
}

void dividi() {
    int a, b;
    char input[20];

    printf("Inserisci il numeratore:\n");

    while (1) {
        printf("Numeratore: ");
        if (fgets(input, sizeof(input), stdin) != NULL) {
            if (sscanf(input, "%d", &a) == 1) {
                break; // Esci dal ciclo se l'input è un numero valido
            } else {
                printf("Input non valido. Inserisci un numero valido.\n");
                input[0] = '\0'; // Resetta l'input
            }
        }
    }

    printf("Inserisci il denominatore diverso da zero:\n");

    while (1) {
        printf("Denominatore: ");
        if (fgets(input, sizeof(input), stdin) != NULL) {
            if (sscanf(input, "%d", &b) == 1 && b != 0) {
                break; // Esci dal ciclo se l'input è un numero valido e diverso da zero
            } else {
                printf("Input non valido o denominatore zero. Inserisci un numero valido e diverso da zero.\n");
                input[0] = '\0'; // Resetta l'input
            }
        }
    }

    float divisione = (float)a / b;
    printf("La divisione tra %d e %d è: %.2f\n", a, b, divisione);
}

void ins_string() {
    char stringa[10];
    printf("Inserisci la stringa:");
    scanf("%s", &stringa);
    printf("%s", stringa);
}

int main() {
    char scelta;

    while (1) {
        menu();
        if (scanf(" %c", &scelta) != 1 || (scelta != 'A' && scelta != 'B' && scelta != 'C')) {
            printf("Scelta non valida. Riprova.\n");
            continue;
        }

        switch (scelta) {
            case 'A':
                moltiplica();
                break;
            case 'B':
                dividi();
                break;
            case 'C':
                ins_string();
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
                break;
        }

        break;
    }

    return 0;
}
