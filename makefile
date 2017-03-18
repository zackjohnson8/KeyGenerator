CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

Main : Main.o FileHandler.o
	$(CC) $(LFLAGS) Main.o FileHandler.o -o Main

Main.o : Main.cpp FileHandler.cpp
	$(CC) $(CFLAGS) Main.cpp

FileHandler.o : FileHandler.cpp FileHandler.h
	$(CC) $(CFLAGS) FileHandler.cpp

clean:
	\rm *.o Main

