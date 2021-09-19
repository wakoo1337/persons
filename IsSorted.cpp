#include "Persons.h"
bool IsSorted(const struct Person* list, const int count, const enum SortType type) {
	for (int j = 0; j < (count - 1); j++) {
		if (Compare(&list[j], &list[j + 1], type) > 0) return false;
	};
	return true;
};