#include "Persons.h"
int Compare(const struct Person* a, const struct Person* b, const enum SortType type) {
	int surname_cmp;
	surname_cmp = CompareStrings(a->surname, b->surname);
	if (surname_cmp) return (surname_cmp * MakeInverseFlag(type));
	else {
		int name_cmp;
		name_cmp = CompareStrings(a->name, b->name);
		if (name_cmp) return (name_cmp * MakeInverseFlag(type));
		else {
			int patr_cmp;
			patr_cmp = CompareStrings(a->patr, b->patr);
			if (patr_cmp) return (patr_cmp * MakeInverseFlag(type));
			else {
				return (((int) a->age) - ((int) b->age) * MakeInverseFlag(type));
			};
		};
	};
	/*
		Отрицательный -- правое больше
		Положительный -- левое  больше
				 Нуль -- одинаково
	*/
};