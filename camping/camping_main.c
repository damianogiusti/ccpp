#include <stdio.h>
#include <stdlib.h>

#include "camping_main.h"
#include "main_menu.h"

#define CAMPING_MAX_OCCUPANCY 100

int main() {
    CampingGroup campers[CAMPING_MAX_OCCUPANCY];
    int currentCampersCount = 0;

    do {
        system("clear");
        // print camping informations
        printf("Posti occupati: %i/%i\n", currentCampersCount, CAMPING_MAX_OCCUPANCY);

        switch (main_menu()) {
            case 1:
            default:
                break;
        }

    } while (ask_if_wants_to_repeat());
}

int ask_if_wants_to_repeat() {
    char response;
    printf("Procedere con un altra operazione? (s/n)");
    scanf(" %s", &response);
    if (response == 's' || response == 'S')
        return 1;
    return 0;
}

int calculatePrice(CampingGroup *campingGroup) {
    return 0;
}
