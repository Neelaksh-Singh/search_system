CC = g++
default: searchengine clean
searchengine: Searchengine.o Readinput.o Map.o
	$(CC) -o searchengine Searchengine.o Readinput.o Map.o
Map.o: Map.cpp Map.h
	$(CC) -c Map.cpp
Readinput.o: Readinput.cpp Readinput.h
	$(CC) -c Readinput.cpp 
Searchengine.o: Searchengine.cpp Engine.h
	$(CC) -c Searchengine.cpp
clean:
	rm *.o
