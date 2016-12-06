#include <stdlib.h>

typedef enum AccomodationType {
    TENDA = 'T', ROULOTTE = 'R'
};

typedef enum VehicleType {
    AUTO = 'A', MOTO = 'M'
};

typedef struct CampingGroup {
    char *groupName;
    int daysCount;
    int peopleCount;
    char accomodationType;
    int accomodationTypeCounts[2];
    char vehicleType;
    int vehicleTypeCounts[2];
} CampingGroup;

CampingGroup *newCampingGroup();

int number_of_tends(CampingGroup *);

int number_of_roulottes(CampingGroup *);

int number_of_auto(CampingGroup *);

int number_of_moto(CampingGroup *);
