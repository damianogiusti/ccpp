#include "pricing_policy.h"

int total_cost_of_person(CampingGroupBooking *campingGroup) {
	const int cost_for_person = 500;
	return campingGroup->peopleCount * 500;
}

int total_cost_of_tends(CampingGroupBooking *campingGroup) {
	const int cost_for_tend = 400;
	return number_of_tends(campingGroup) * cost_for_tend;
}

int total_cost_of_roulottes(CampingGroupBooking *campingGroup) {
	const int cost_for_roulotte = 450;
	return number_of_roulottes(campingGroup) * cost_for_roulotte;
}

int total_cost_of_auto(CampingGroupBooking *campingGroup) {
	const int cost_for_auto = 550;
	return number_of_auto(campingGroup) * cost_for_auto;
}

int total_cost_of_moto(CampingGroupBooking *campingGroup) {
	const int cost_for_moto = 350;
	return number_of_moto(campingGroup) * cost_for_moto;
}
