#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct Person {
	char* name;
	char* surname;
	char* patr;
	unsigned int age;
};
enum SortType {
	asc  = 0,
	desc = 1
};
extern struct Person defperson;
int CompareStrings(const char* a, const char* b);
void Sort(struct Person* persons, const int count, const enum SortType type);
void SmallSort(struct Person* persons, const int count, const enum SortType type);
int Compare(const struct Person* a, const struct Person* b, const enum SortType type);
struct Person* ParseCmdLine(const int argc, char** argv, unsigned long* count);
int MakeInverseFlag(const enum SortType type);
bool IsSorted(const struct Person* list, const int count, const enum SortType type);
void Display(const struct Person* list, const int count);
void CheckSafeArg(const int arg, const int argc, const char *value);
#define BIG_SORT 12