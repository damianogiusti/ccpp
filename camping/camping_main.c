#include <stdio.h>
#include <stdlib.h>

#include "camping_main.h"
#include "main_menu.h"
#include "string.h"

#define CAMPING_MAX_OCCUPANCY 100
#define CAMPING_HOUSES_AMOUNT 10

void listAll(House houses[]) {
    int i;
    for (i = 0; i < CAMPING_HOUSES_AMOUNT; ++i) {
        printf("Name: %s", houses[i].name);
        printf("\nMax occupancy: %i", houses[i].maxOccupancy);
    }
}

int main() {
    CampingGroupBooking campers[CAMPING_MAX_OCCUPANCY];
    int currentCampersCount = 0;
    House houses[CAMPING_HOUSES_AMOUNT];
    initHouses(houses);
//    listAll(houses);

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

void initHouses(House houses[]) {
    const int FOUR_PEOPLE_HOUSES_COUNT = 7;
    const int TWO_PEOPLE_HOUSES_COUNT = 3;
    House *currentHouse = houses;
    int i;
    for (i = 0; i < CAMPING_HOUSES_AMOUNT; ++i) {
        currentHouse->name = "default name";
        if (i < FOUR_PEOPLE_HOUSES_COUNT)
            currentHouse->maxOccupancy = 4;
        else currentHouse->maxOccupancy = 2;
        currentHouse++;
    }
}

void printBookings(CampingGroupBooking bookings[], int count) {
    int i;
    for (i = 0; i < count; ++i) {
        CampingGroupBooking currentBooking = bookings[i];
        printf("\nGroup: %s", currentBooking.groupName);
        // print out accomodations types counts
        int numberOfTends = number_of_tends(&currentBooking);
        int numberOfRoulottes = number_of_roulottes(&currentBooking);

        printf("\nAccomodations: ");
        if (numberOfRoulottes + numberOfTends > 0) {
            if (number_of_tends(&currentBooking) > 0)
                printf("\nTends count: %i", number_of_tends(&currentBooking));
            if (number_of_roulottes(&currentBooking) > 0)
                printf("\nRoulottes count: %i", number_of_roulottes(&currentBooking));
//        for (j = 0; j < ALLOWED_ACCOMODATIONS_COUNT; ++j) {
//            int accomodationTypeCount = currentBooking.accomodationTypeCounts[j];
//            if (accomodationTypeCount > 0)
//                printf("\n%s count: %i",
//                       accomodationStringValue(currentBooking.accomodationType),
//                       accomodationTypeCount);
//        }
        } else if (currentBooking.house == NULL) {
            printf("none");
        }
        // if house is present, show house details and people count over house max occupancy
        if (currentBooking.house != NULL) {
            printf("\nBooked house \"%s\"", currentBooking.house->name);
            printf("\nNumber of people: %i/%i", currentBooking.peopleCount, currentBooking.house->maxOccupancy);
        }
        // if house is null, we have to show the people count alone
        else {
            printf("\nNumber of people: %i", currentBooking.peopleCount);
        }

        // print out vehicles types counts
        printf("\nVehicles:");
        printf("\nAuto count: %i", number_of_auto(&currentBooking));
        printf("\nMoto count: %i", number_of_moto(&currentBooking));

        // print out booking date
        printf("\nBooking date: %s", currentBooking.peopleCount);
    }
}

int calculatePrice(CampingGroupBooking *campingGroup) {
    return 0;
}
