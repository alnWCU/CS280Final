linkedlist.o: linkedlist.h linkedlist.cpp
	g++ -c linkedlist.cpp
bst.o: bst.h bst.cpp
	g++ -c bst.cpp
graph.o: graph.h graph.cpp
	g++ -c graph.cpp
sort.o: sort.h sort.cpp
	g++ -c sort.cpp
run: main.cpp types.h
	g++ -c main.cpp bst.o linkedlist.o graph.o sort.o
