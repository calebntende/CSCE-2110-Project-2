# specify the compiler
CC=g++ 

# specify options for the compiler
CFLAGS=-c -Wall

all: project

project: Main/main.o Commercial/Commercial.o Residential/Residential.o Functions/Functions.o Industrial/Industrial.o
	$(CC) Main/main.o Commercial/Commercial.o Residential/Residential.o Functions/Functions.o Industrial/Industrial.o -o project

Main/main.o: Main/main.cpp
	$(CC) $(CFLAGS) Main/main.cpp -o Main/main.o

Commercial/Commercial.o: Commercial/Commercial.cpp
	$(CC) $(CFLAGS) Commercial/Commercial.cpp -o Commercial/Commercial.o

Residential/Residential.o: Residential/Residential.cpp
	$(CC) $(CFLAGS) Residential/Residential.cpp -o Residential/Residential.o

Functions/Functions.o: Functions/Functions.cpp
	$(CC) $(CFLAGS) Functions/Functions.cpp -o Functions/Functions.o

Industrial/Industrial.o: Industrial/Industrial.cpp
	$(CC) $(CFLAGS) Industrial/Industrial.cpp -o Industrial/Industrial.o

clean:
	rm -rf *o project Main/*.o Commercial/*.o Residential/*.o Functions/*.o Industrial/*.o