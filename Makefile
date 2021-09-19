.PHONY: all
all: Persons.exe
Persons.exe: statlib.lib Persons.obj
	link /out:Persons.exe statlib.lib Persons.obj
statlib.lib: Compare.obj CompareStrings.obj defperson.obj Display.obj IsSorted.obj MakeInverseFlag.obj ParseCmdLine.obj Sort.obj SmallSort.obj
	lib /out:statlib.lib Compare.obj CompareStrings.obj defperson.obj Display.obj IsSorted.obj MakeInverseFlag.obj ParseCmdLine.obj Sort.obj SmallSort.obj
Compare.obj: Compare.c
	cl /c Compare.c
CompareStrings.obj: CompareStrings.c
	cl /c CompareStrings.c
defperson.obj: defperson.c
	cl /c defperson.c
Display.obj: Display.c
	cl /c Display.c
IsSorted.obj: IsSorted.c
	cl /c IsSorted.c
MakeInverseFlag.obj: MakeInverseFlag.c
	cl /c MakeInverseFlag.c
ParseCmdLine.obj: ParseCmdLine.c
	cl /c ParseCmdLine.c
Persons.obj: Persons.c
	cl /c Persons.c
Sort.obj: Sort.c
	cl /c Sort.c
SmallSort.obj: SmallSort.c
	cl /c SmallSort.c