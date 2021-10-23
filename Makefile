SRC_DIR  = ./src
OBJ_DIR  = ./obj

CC      = g++
CPPFILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJFILES = $(CPPFILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
OUT      = ./bin/main

CFLAGS = -Wall

$(OUT): $(OBJFILES)
	$(CC) -o $@ $^ 

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean test
clean:
	rm -f $(OBJFILES) $(OUT)

test:
	echo $(OBJFILES)
