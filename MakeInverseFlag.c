#include "Persons.h"
int MakeInverseFlag(const enum SortType type) {
	if (type == asc) return  1;
	else             return -1;
};