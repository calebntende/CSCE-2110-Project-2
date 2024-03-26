project2: /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Main/main.o /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Residential/Residential.o /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Functions/Functions.o /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Commercial/Commercial.o /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Industrial/Industrial.o
	g++ /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Main/main.o /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Residential/Residential.o /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Functions/Functions.o /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Commercial/Commercial.o /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Industrial/Industrial.o -o project2

/nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Main/main.o: /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Main/main.cpp
	g++ -c /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Main/main.cpp -o /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Main/main.o

/nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Residential/Residential.o: /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Residential/Residential.cpp
	g++ -c /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Residential/Residential.cpp -o /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Residential/Residential.o

/nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Functions/Functions.o: /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Functions/Functions.cpp
	g++ -c /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Functions/Functions.cpp -o /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Functions/Functions.o

/nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Commercial/Commercial.o: /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Commercial/Commercial.cpp
	g++ -c /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Commercial/Commercial.cpp -o /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Commercial/Commercial.o

/nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Industrial/Industrial.o: /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Industrial/Industrial.cpp
	g++ -c /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Industrial/Industrial.cpp -o /nfs/home/STUDENTS/cmn0136/Project\ 2/CSCE-2110-Project-2/Industrial/Industrial.o

clean:
	rm -f *.o