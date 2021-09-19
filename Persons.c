#include "Persons.h"
int main(int argc, char** argv) {
	struct Person* arr;
	unsigned long count;

	arr = ParseCmdLine(argc, argv, &count);
	Sort(arr, count, asc);

	Display(arr, count);
	return 0;
};