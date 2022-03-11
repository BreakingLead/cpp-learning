OLC=-lX11 -lGL -lpthread -lpng -lstdc++fs -std=c++17
PP=g++

#注意：$@ target    $? dependencies

.SUFFIXES: .cpp
.cpp.o:
	${PP} ${OLC} -c $<

all: hw

hw:hw.o
	${PP} ${OLC} -o $@ $?

.PHONY: clean
clean:
	rm *.o

run: all
	@./hw
