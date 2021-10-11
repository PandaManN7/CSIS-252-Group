# Johnny Quach
# CSIS 252
# Quach4

EXE =prog4

CC = g++

OBJECTS = main.o InFoot.o 

LFLAGS =
CFLAGS =  

$(EXE):		$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp classInFt.h
		$(CC) $(CFLAGS) -c main.cpp

classInFt.o:	InFoot.cpp classInFt.h 
		$(CC) $(CFLAGS) -c ClassInFt.cpp

classInFt.o:    classInFt.h 
		$(CC) $(CFLAGS) -c ClassInFt.h

clean:		
		rm -rf $(EXE) $(OBJECTS) *-
