CC = g++
default: searchengine clean
searchengine: Searchengine.o Readinput.o Map.o Trienode.o Listnode.o
	$(CC) -o searchengine Searchengine.o Readinput.o Map.o Trienode.o Listnode.o
Listnode.o: Listnode.cpp Listnode.h
	$(CC) -c Listnode.cpp
Trienode.o: Trienode.cpp Trienode.h
	$(CC) -c Trienode.cpp
Map.o: Map.cpp Map.h
	$(CC) -c Map.cpp
Readinput.o: Readinput.cpp Readinput.h
	$(CC) -c Readinput.cpp 
Searchengine.o: Searchengine.cpp Engine.h
	$(CC) -c Searchengine.cpp
clean:
	rm *.o
