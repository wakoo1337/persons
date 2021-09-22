#include "Persons.h"
int main(int argc, char** argv) {
	struct Person* arr;
	unsigned long count;

	int status;
	arr = ParseCmdLine(argc, argv, &count);
	
	enum SortType order = GetOrder();
	
	status = Sort(arr, count, order);
	
	if (status) {
		puts(sort_errors[status]);
		return status;
	};
	
	Display(arr, count);
	return 0;
};