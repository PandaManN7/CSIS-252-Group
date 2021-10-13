# CSIS 252
# Andrew Schonnesen
# 10/08/2021

EXE = prog4

CC = g++

OBJECTS = main.o dogyears.o

LFLAGS = 

CFLAGS = 

$(EXE):				$(OBJECTS)
					$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:				main.cpp
					$(CC) $(CFLAGS) -c main.cpp

dogyears.o:			dogyears.cpp
					$(CC) $(CFLAGS) -c dogyears.cpp

clean:		
					rm -rf $(EXE) $(OBJECTS) *~