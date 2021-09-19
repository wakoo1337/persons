#include "Persons.h"
struct Person* ParseCmdLine(const int argc, char** argv, unsigned long* count) {
	struct Person* ret = NULL;
	*count = 0;
	for (int j = 1; j < argc; j++) {
		if (!CompareStrings(argv[j], "--person")) {
			(*count)++;
			ret = (struct Person *) realloc(ret, (*count) * sizeof(struct Person));
			ret[(*count) - 1] = defperson;
		} else {
			if (!CompareStrings(argv[j], "--fn")) {
				j++;
				ret[(*count) - 1].name = argv[j];
			} else {
				if (!CompareStrings(argv[j], "--ln")) {
					j++;
					ret[(*count) - 1].surname = argv[j];
				} else {
					if (!CompareStrings(argv[j], "--mn")) {
						j++;
						ret[(*count) - 1].patr = argv[j];
					} else {
						if (!CompareStrings(argv[j], "--age")) {
							j++;
							sscanf_s(argv[j], "%u", &ret[(*count) - 1].age);
						} else {
							puts("Неверный аргумент");
							exit(0);
						};
					};
				};
			};
		};
	};
	return ret;
};