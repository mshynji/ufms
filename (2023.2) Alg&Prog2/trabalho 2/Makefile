CXX       := gcc
CXX_FLAGS := -Wall -Wextra -std=c99

BIN        := bin
SRC        := src
INCLUDE	   := include
EXECUTABLE := main


all: clean $(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.c
	$(CXX) $(CXX_FLAGS) -I $(INCLUDE)  $^ -o $@

clean:
	-rm ./$(BIN)/*
