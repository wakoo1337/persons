#include "Persons.h"
void SmallSort(struct Person* persons, const int count, const enum SortType type) {
	int already = 1;
	while (already < count) {
		int new_pos = 0;
		while ((new_pos < already) && (Compare(&persons[new_pos], &persons[already], type) < 0)) new_pos++;
		if (new_pos != already) {
			struct Person swap;
			swap = persons[already];
			memmove(persons + new_pos + 1, persons + new_pos, (already - new_pos) * sizeof(struct Person));
			persons[new_pos] = swap;
		};
		already++;
	};
};