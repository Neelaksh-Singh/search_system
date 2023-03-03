CC = g++
default: searchengine clean
searchengine: Searchengine.o Readinput.o
	$(CC) -o searchengine Searchengine.o Readinput.o
Readinput.o: Readinput.cpp Readinput.h
	$(CC) -c Readinput.cpp 
Searchengine.o: Searchengine.cpp Engine.h
	$(CC) -c Searchengine.cpp
clean:
	rm *.o
