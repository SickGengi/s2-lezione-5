//GIOCO QUIZ CON 5 DOMANDE E 3 RISPOSTE PER OGNUNA

#include <stdio.h>
#include <ctype.h>

void quiz() {
    int punteggio = 0;
    char risposta;

    // DOMANDA 1
    printf("\nDomanda 1: \n Qual'è l'opera più famosa di Leonardo da Vinci? \n");
    printf("A- La Notte Stellata \n");
    printf("B- L'Ultima cena \n");
    printf("C- La Mietitura \n");

    while (1) {								       //ciclo per ricevere in input a,b o c
        printf("\nInserisci la tua risposta (A, B o C): ");
        scanf(" %c", &risposta);
        risposta = toupper(risposta);					      //trasformare minuscole in maiuscole

        if (risposta == 'A' || risposta == 'B' || risposta == 'C') {	      //se risposta a,b o c --> break e prosegui
            break;
        } else {
            printf("\nRisposta non valida. Inserisci A, B o C.\n");	     //wake up :)
        }
    }

    if (risposta == 'B') {						      //calcolo risposta giusta e punteggio
        punteggio++;
    } else {
        printf("\nRisposta sbagliata \n");			  	     //messaggio di risposta errata
    }

    // DOMANDA 2
    printf("\nDomanda 2: \n Chi è stato l'artista che ha dipinto la Cappella Sistina? \n");
    printf("A- Raffaello \n");
    printf("B- Donatello \n");
    printf("C- Michelangelo \n");

    while (1) {
        printf("\nInserisci la tua risposta (A, B o C): ");
        scanf(" %c", &risposta);
        risposta = toupper(risposta);

        if (risposta == 'A' || risposta == 'B' || risposta == 'C') {
            break;
        } else {
            printf("\nRisposta non valida. Inserisci A, B o C.\n");
        }
    }

    if (risposta == 'C') {
        punteggio++;
    } else {
        printf("\nRisposta sbagliata \n");
    }

    // DOMANDA 3
    printf("\nDomanda 3: \n Chi ha formulato la teoria eliocentrica, sostenendo che la Terra orbita intorno al Sole? \n");
    printf("A- Copernico \n");
    printf("B- Gallileo Gallilei \n");
    printf("C- Newton \n");

    while (1) {
        printf("\nInserisci la tua risposta (A, B o C): ");
        scanf(" %c", &risposta);
        risposta = toupper(risposta);

        if (risposta == 'A' || risposta == 'B' || risposta == 'C') {
            break;
        } else {
            printf("\nRisposta non valida. Inserisci A, B o C.\n");
        }
    }

    if (risposta == 'A') {
        punteggio++;
    } else {
        printf("\nRisposta sbagliata \n");
    }


    // DOMANDA 4
    printf("\nDomanda 4: \n Qual è stato l'invento che ha rivoluzionato la diffusione della conoscenza durante il Rinascimento? \n");
    printf("A- Telescopio \n");
    printf("B- Stampa \n");
    printf("C- Macchina a vapore \n");

    while (1) {
        printf("\nInserisci la tua risposta (A, B o C): ");
        scanf(" %c", &risposta);
        risposta = toupper(risposta);

        if (risposta == 'A' || risposta == 'B' || risposta == 'C') {
            break;
        } else {
            printf("\nRisposta non valida. Inserisci A, B o C.\n");
        }
    }

    if (risposta == 'B') {
        punteggio++;
    } else {
        printf("\nRisposta sbagliata \n");
    }
    
        // DOMANDA 5
    printf("\nDomanda 5: \n Quale città italiana è considerata il centro del Rinascimento? \n");
    printf("A- Venezia \n");
    printf("B- Firenze \n");
    printf("C- Roma \n");

    while (1) {
        printf("\nInserisci la tua risposta (A, B o C): ");
        scanf(" %c", &risposta);
        risposta = toupper(risposta);

        if (risposta == 'A' || risposta == 'B' || risposta == 'C') {
            break;
        } else {
            printf("\nRisposta non valida. Inserisci A, B o C.\n");
        }
    }

    if (risposta == 'B') {
        punteggio++;
    } else {
        printf("\nRisposta sbagliata \n");
    }

    

    printf("Il tuo punteggio è: %d \n", punteggio);
}

int main() {
    int scelta, fine = 0;
    char nickname [100];
    
    printf ("Inserisci il tuo nickname: ");
    scanf("%s", nickname);
    printf("Benvenuto %s", nickname);

    printf("\nIl gioco consiste in 5 domande a risposta multipla: \n");		//menù iniziale

    do {
        printf("\n1-Iniziare una nuova partita\n");
        printf("2-Uscire dal gioco\n");
        
        printf("\nInserisci la tua scelta (1 o 2): ");
        if (scanf("%d", &scelta) != 1) {
            printf("Inserisci un numero valido (1 o 2).\n");
            scanf("%*s"); // Pulizia del buffer di input
            continue;
        }

        switch (scelta) {
            case 1: {							//scelta 1 "inizio gioco" ---> richiamo void quiz
                quiz();
                break;
            }

            case 2: {							//scelta 2 "fine gioco" ---> fine programma
                fine = 1;
                break;
            }

            default: {
                printf("Selezione non valida\n");			//wake up :)
                break;
            }
        }
    } while (!fine);

    return 0;
}
