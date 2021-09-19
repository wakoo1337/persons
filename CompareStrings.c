#include "Persons.h"

int CompareStrings(const char* a, const char* b) {
	unsigned long int j = 0;
	while (a[j] && b[j] && (a[j] == b[j])) j++;
	return a[j] - b[j];
	/*
		Отрицательный -- правое больше
		Положительный -- левое  больше
		         Нуль -- одинаково
	*/
};