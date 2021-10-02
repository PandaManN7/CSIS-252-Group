How to make a MakeFile.
-------------------------

How to build:
------------
Create a file and name it "makefile" with no file extension on it.
Open and edit your makefile. You will want to enter the following fields

EXE = programName.o
CC = g++ #Compiler here
LFLAGS = # libraries used
CFLAGS = #Flags for compiler

$(EXE): $(OBJECTS)
        $(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)
        
programName.o: programName.cpp
                $(CC) $(CFLAGS) -c programNamme.cpp
                
clean:
    rm -rd $(EXE) $(OBJECTS) *~
