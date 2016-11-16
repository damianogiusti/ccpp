#include <stdio.h>
#include <stdlib.h>

#include "main.h"

int main() {

    int balance = INITIAL_AMOUNT;
    Movement movements[MAX_MOVEMENTS_COUNT];
    int movementsCount = 0;

    char doItAgain;
    do {
        system("clear");
        printf("CONTO CORRENTE\n");
        printBalance(balance);

        int exit = navigate(&balance, movements, &movementsCount, &cashout, &deposit, &listMovements);
        if (exit)
            return 0;

        printf("Vuoi fare un altra operazione?");
        scanf("  %c", &doItAgain);
    } while (doItAgain != 'n' && doItAgain != 'N');

    return 0;
}

int showMainMenu() {
    int result;

    printf("%i)\tPRELIEVO\n", CASHOUT);
    printf("%i)\tDEPOSITO\n", DEPOSIT);
    printf("%i)\tLISTA MOVIMENTI\n", SHOW_MOVEMENTS);
    printf("%i)\tESCI\n", EXIT);
    printf("Inserisci codice operazione:");
    scanf("  %i", &result);

    return result;
}

int navigate(int *balance,
             Movement movements[],
             int *movementsCount,
             Movement cashoutFunction(int *, int),
             Movement depositFunction(int *, int),
             void listFunction(Movement[], int)) {

    int amount;
    switch (showMainMenu()) {
        case CASHOUT: {
            printf("\nQuanto denaro vuoi prelevare?");
            scanf(" %i", &amount);
            if (amount <= 0) {
                printf("Importo invalido, riprova!\n\n");
                break;
            }
            if (amount > *balance) {
                printf("Impossibile prelevare! Saldo insufficiente.\n\n");
                break;
            }
            if (*movementsCount + 1 < MAX_MOVEMENTS_COUNT) {
                movements[*movementsCount] = cashoutFunction(balance, amount);
                (*movementsCount)++;
            }
            printBalance(*balance);
            break;
        }
        case DEPOSIT: {
            printf("\nQuanto denaro vuoi depositare?");
            scanf(" %i", &amount);
            if (amount <= 0) {
                printf("Importo invalido, riprova!\n\n");
                break;
            }
            if (*movementsCount + 1 < MAX_MOVEMENTS_COUNT) {
                movements[*movementsCount] = depositFunction(balance, amount);
                (*movementsCount)++;
            }
            printBalance(*balance);
            break;
        }
        case SHOW_MOVEMENTS: {
            listFunction(movements, *movementsCount);
            break;
        }
        case EXIT:
            printf("\nArrivederci!\n\n");
            return 1;

        default:;
    }
    return 0;
}

Movement cashout(int *totalBalance, int amount) {
    *totalBalance -= amount;
    // create movement
    Movement movement;
    movement.name = "Prelievo";
    movement.date = "Data fittizia";
    movement.direction = OUT;
    movement.amount = amount;
    return movement;
}

Movement deposit(int *totalBalance, int amount) {
    *totalBalance += amount;
    // create movement
    Movement movement;
    movement.name = "Prelievo";
    movement.date = "Data fittizia";
    movement.direction = OUT;
    movement.amount = amount;
    return movement;
}

void listMovements(Movement movements[], int count) {
    if (count == 0) {
        printf("\nNon hai ancora effettuato movimenti!\n");
        return;
    }

    printf("\nEcco i tuoi movimenti:\n");

    Movement *currentMovement = movements;
    int i;
    for (i = 0; i < count; i++) {
        Movement movement = (*currentMovement);
        printf("# %i\n", (i + 1));
        if (movement.direction == IN)
            printf("\tTipo movimento: DEPOSITO\n");
        else printf("\tTipo movimento: PRELIEVO\n");
        printf("\tImporto: %d€\n", movement.amount);
        printf("\tData: %s\n", movement.date);

        currentMovement++;
    }
}

void printBalance(int balance) {
    printf("\nIl tuo saldo: %i€\n\n", balance);
}
