#include "camping_group.h"

CampingGroup *newCampingGroup() {
	return malloc(sizeof(CampingGroup));
}

int number_of_tends(CampingGroup *campingGroup) {
	return campingGroup->accomodationTypeCounts[0];
}

int number_of_roulottes(CampingGroup *campingGroup) {
	return campingGroup->accomodationTypeCounts[1];
}

int number_of_auto(CampingGroup *campingGroup) {
	return campingGroup->vehicleTypeCounts[0];
}

int number_of_moto(CampingGroup *campingGroup) {
	return campingGroup->vehicleTypeCounts[1];
}