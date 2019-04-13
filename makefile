# Project: gofish
# Makefile created by Dev-C++ 4.9.9.2
# Modified by jwebb

CPP  = g++
RES  = 
OBJ  = card.o deck.o go_fish.o player.o $(RES)
LINKOBJ  = card.o deck.o go_fish.o player.o $(RES)
BIN  = gofish
CXXFLAGS = $(CXXINCS)  
CFLAGS = $(INCS)  
RM = rm -f


all: gofish 

clean: 
	${RM} $(OBJ) $(BIN)
    
$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o gofish $(LIBS)
    
gofish: go_fish.o card.o deck.o player.o
	g++ go_fish.o card.o deck.o player.o -o go_fish

go_fish.o: go_fish.cpp card.h deck.h player.h
	g++ -c go_fish.cpp -o go_fish.o $(CXXFLAGS)

card.o: card.cpp card.h
	g++ -c card.cpp -o card.o $(CXXFLAGS)

deck.o: deck.cpp card.h deck.h
	g++ -c deck.cpp -o deck.o $(CXXFLAGS)

player.o: player.cpp card.h deck.h player.h
	g++ -c player.cpp -o player.o $(CXXFLAGS)