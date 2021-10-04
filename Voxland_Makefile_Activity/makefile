# Mason Voxland
#CSIS 252
#makefile example

EXE = prog1

CC = g++

OBJECTS = Ex1.o Ex2.o

#extra libraries for the compiler to include
LFLAGS = 

#leave blank
CFLAGS = 


#when executable command is called...use dependencies (objects in this case)
$(EXE): 	$(OBJECTS)
#		rules go here:
		$(CC) $(CLFAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

#give us Ex1.o! dependent on Ex1.cpp
Ex1.o: 		Ex1.cpp
		#use cc compiler, with the cflags taken into account, to compile main.cpp for us.
		$(CC) $(CFLAGS) -c Ex1.cpp
		
Ex2.o: 		Ex2.cpp
		$(CC) $(CFLAGS) -c Ex2.cpp
		
#add the capability to use "make clean"
clean:
		rm -rf $(EXE) $(OBJECTS) *~
