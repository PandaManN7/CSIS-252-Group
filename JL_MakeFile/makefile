
EXE = exampleMake

CC = g++

OBJECTS = main.o

LFLAGS =  #put things here to use other librarys

CFLAGS =  #Incdicate flags for compiler

$(EXE):		$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o: main.cpp
		$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -rf $(EXE) $(OBJECTS) *~




