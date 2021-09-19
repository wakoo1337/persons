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
				CheckSafeArg(j, argc, argv[j]);
				ret[(*count) - 1].name = strdup(argv[j]);
			} else {
				if (!CompareStrings(argv[j], "--ln")) {
					j++;
					CheckSafeArg(j, argc, argv[j]);
					ret[(*count) - 1].surname = strdup(argv[j]);
				} else {
					if (!CompareStrings(argv[j], "--mn")) {
						j++;
						CheckSafeArg(j, argc, argv[j]);
						ret[(*count) - 1].patr = strdup(argv[j]);
					} else {
						if (!CompareStrings(argv[j], "--age")) {
							j++;
							CheckSafeArg(j, argc, argv[j]);
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