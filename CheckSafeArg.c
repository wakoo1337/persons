#include "Persons.h"
void CheckSafeArg(const int arg, const int argc, const char *value) {
	if (arg >= argc) {
		puts("Номер аргумента больше их количества (пустой аргумент на конце?)");
		exit(0);
	};
	if (!memcmp(value, "--", 2 * sizeof(char))) {
		puts("Значение не может начинаться с -- (пропущено значение аргумента?)");
		exit(0);
	};
};