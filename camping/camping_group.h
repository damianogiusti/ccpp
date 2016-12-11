#include <stdlib.h>
#include "date.h"

#define ALLOWED_ACCOMODATIONS_COUNT 3
#define ALLOWED_VEHICLES_COUNT 2

typedef enum AccomodationType {
    TENDA = 'T', ROULOTTE = 'R', HOUSE = 'H'
} AccomodationType;

typedef enum VehicleType {
    AUTO = 'A', MOTO = 'M'
} VehicleType;

typedef struct House {
    char *name;
    int maxOccupancy;
} House;

typedef struct CampingGroupBooking {
    char *groupName;
    int peopleCount;
    int daysCount;
    Date bookingDate;
    AccomodationType accomodationType;
    struct House *house;
    int accomodationTypeCounts[3];
    VehicleType vehicleType;
    int vehicleTypeCounts[2];
} CampingGroupBooking;

CampingGroupBooking *newCampingGroup();

char *accomodationStringValue(AccomodationType);

char *vehicleStringValue(VehicleType);

int number_of_tends(CampingGroupBooking *);

int number_of_roulottes(CampingGroupBooking *);

int number_of_auto(CampingGroupBooking *);

int number_of_moto(CampingGroupBooking *);
