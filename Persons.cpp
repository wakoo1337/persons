#include "Persons.h"
int main(int argc, char** argv) {
	struct Person* arr;
	unsigned long count;

	arr = ParseCmdLine(argc, argv, &count);
	Sort(arr, count, asc);

	for (unsigned long i = 0; i < count; i++) {
		printf("%lu %s %s %s %u\n", i, arr[i].name, arr[i].surname, arr[i].patr, arr[i].age);
	};
};