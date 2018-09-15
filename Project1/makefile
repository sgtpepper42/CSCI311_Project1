CXX = g++
CXXFLAGS = -c -g -std=c++11 -Wall -W -Werror -pedantic
LDFLAGS = 

restaurant: restaurant.o table.o party.o
	$(CXX) $(LDFLAGS) table.o party.o restaurant.o -o restaurant

party.o: party.cpp party.h
	$(CXX) $(CXXFLAGS) party.cpp

table.o: table.cpp table.h party.h
	$(CXX) $(CXXFLAGS) table.cpp

restaurant.o: restaurant.cpp restaurant.h doublylinkedlist.h table.h party.h
	$(CXX) $(CXXFLAGS) restaurant.cpp

clean:
	rm *o restaurant
