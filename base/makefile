heap: main.o student.o date.o address.o
	g++ main.o student.o date.o address.o -o heap

main.o: main.cpp student.h date.h address.h
	g++ -c main.cpp

student.o: student.cpp date.h address.h
	g++ -c student.cpp

date.o: date.cpp date.h
	g++ -c date.cpp

address.o: address.cpp address.h
	g++ -c address.cpp
