#include "Persons.h"
int MakeInverseFlag(const enum SortType type) {
	if (type == asc) return 1;
	else {
		if (type == desc) return -1;
		else {
			puts("Неверный флаг");
			exit(0);
		};
	};
};