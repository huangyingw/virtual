run : virtual.o
	g++ -o run virtual.o
virtual.o : virtual.cpp
	g++ -c virtual.cpp
clean :
	rm run virtual.o
