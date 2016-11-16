//
// Created by Damiano Giusti on 16/11/16.
//

#ifndef BANK_ACCOUNT_MAIN_H
#define BANK_ACCOUNT_MAIN_H

#endif //BANK_ACCOUNT_MAIN_H

#define INITIAL_AMOUNT 10000
#define MAX_MOVEMENTS_COUNT 100

typedef enum {
    IN, OUT
} Direction;

enum {
    CASHOUT, DEPOSIT, SHOW_MOVEMENTS, EXIT
};

typedef struct {
    char *name;
    int amount;
    Direction direction;
    char *date;
} Movement;

int main();

void printBalance(int);

int showMainMenu();

int navigate(int *, Movement[], int *, Movement(int *, int), Movement(int *, int), void (Movement[], int));

Movement cashout(int *, int);

Movement deposit(int *, int);

void listMovements(Movement[], int);