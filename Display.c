#include "Persons.h"
void Display(const struct Person* list, const int count) {
	for (int i = 0; i < count; i++) {
		printf("%lu %s %s %s %u\n", i, list[i].name, list[i].surname, list[i].patr, list[i].age);
	};
};