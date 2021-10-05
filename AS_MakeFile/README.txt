
#----------HOW TO MAKE A MAKEFILE WITH TWO CPP FILES:-------------#

Create a file called "Makefile"
Copy and paste the template below and insert appropriate values into each variable.


#-------Example makeFile:-------#


EXE = all hail the best makefile

CC = g++

OBJECTS = main.o second.o

LFLAGS = 

CFLAGS = 

$(EXE):				$(OBJECTS)
					$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:				main.cpp
					$(CC) $(CFLAGS) -c main.cpp

second.o:			second.cpp
					$(CC) $(CFLAGS) -c second.cpp


clean:		
					rm -rf $(EXE) $(OBJECTS) *~
    


#----------how to run makefile with two CPP files:-------------#

1) Use the command `make` to make file. 
2) Once completed use the name in the Makefile to run. Example used in example: `projectName`.
3) After that you'll be left with files for example ${main cpp file}.o

Optional but recommended (clean):

4) To remove leftover files like "main.o" use the command: `make clean`.


