CPP     = g++
CFLAGS  =
LDFLAGS =

all: calc clean

%.o: %.cpp
	$(CPP) -c $(CFLAGS) $< -o $@

%.tab.cpp %.tab.h: %.ypp
	bison -d $<

%.yy.cpp: %.l %.tab.h
	flex -o $@ $<

calc: calc.tab.o calc.yy.o node.o
	$(CPP) -o $@ $^ $(LDFLAGS)

clean:
	rm -f *.o *.tab.cpp *.tab.hpp *.yy.cpp

cleanest: clean
	rm calc
