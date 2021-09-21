.PHONY: all
all: Persons.exe
Persons.exe: sort.lib Persons.obj defperson.obj Display.obj IsSorted.obj ParseCmdLine.obj CheckSafeArg.obj GetOrder.obj
	link /out:Persons.exe sort.lib Persons.obj defperson.obj Display.obj IsSorted.obj ParseCmdLine.obj CheckSafeArg.obj GetOrder.obj
sort.lib: Compare.obj CompareStrings.obj MakeInverseFlag.obj Sort.obj SmallSort.obj sort_errors.obj
	lib /out:sort.lib Compare.obj CompareStrings.obj MakeInverseFlag.obj Sort.obj SmallSort.obj sort_errors.obj
Compare.obj: Compare.c Persons.h
	cl /c Compare.c
CompareStrings.obj: CompareStrings.c Persons.h
	cl /c CompareStrings.c
defperson.obj: defperson.c Persons.h
	cl /c defperson.c
Display.obj: Display.c Persons.h
	cl /c Display.c
IsSorted.obj: IsSorted.c Persons.h
	cl /c IsSorted.c
MakeInverseFlag.obj: MakeInverseFlag.c Persons.h
	cl /c MakeInverseFlag.c
ParseCmdLine.obj: ParseCmdLine.c Persons.h
	cl /c ParseCmdLine.c
Persons.obj: Persons.c Persons.h
	cl /c Persons.c
Sort.obj: Sort.c Persons.h
	cl /c Sort.c
SmallSort.obj: SmallSort.c Persons.h
	cl /c SmallSort.c
CheckSafeArg.obj: CheckSafeArg.c Persons.h
	cl /c CheckSafeArg.c
sort_errors.obj: sort_errors.c Persons.h
	cl /c sort_errors.c
GetOrder.obj: GetOrder.c Persons.h
	cl /c GetOrder.c