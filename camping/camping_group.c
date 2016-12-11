#include "camping_group.h"

CampingGroupBooking *newCampingGroup() {
	return malloc(sizeof(CampingGroupBooking));
}

int number_of_tends(CampingGroupBooking *campingGroup) {
	return campingGroup->accomodationTypeCounts[0];
}

int number_of_roulottes(CampingGroupBooking *campingGroup) {
	return campingGroup->accomodationTypeCounts[1];
}

int number_of_auto(CampingGroupBooking *campingGroup) {
	return campingGroup->vehicleTypeCounts[0];
}

int number_of_moto(CampingGroupBooking *campingGroup) {
	return campingGroup->vehicleTypeCounts[1];
}