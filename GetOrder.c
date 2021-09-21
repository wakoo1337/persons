#include "Persons.h"
enum SortType GetOrder() {
	char get;
	do {
		printf("Выберите порядок сортировки [AaDd]: ");
		get = getchar();
		if ((get == 'a') || (get == 'A')) return  asc;
		if ((get == 'd') || (get == 'D')) return desc;
	} while (!strchr("AaDd", get));
	return asc;
};