.PHONY: all
all: Persons.exe
Persons.exe: statlib.lib Persons.obj
	link /out:Persons.exe statlib.lib Persons.obj
statlib.lib: Compare.obj CompareStrings.obj defperson.obj Display.obj IsSorted.obj MakeInverseFlag.obj ParseCmdLine.obj Sort.obj SmallSort.obj CheckSafeArg.obj
	lib /out:statlib.lib Compare.obj CompareStrings.obj defperson.obj Display.obj IsSorted.obj MakeInverseFlag.obj ParseCmdLine.obj Sort.obj SmallSort.obj CheckSafeArg.obj
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