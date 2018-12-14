CC	=gcc
LIB	=myslib
BLD_DIR	=build
INC_DIR	=inc
LIB_DIR	=lib
SRC_DIR	=src
SRC := $(shell find $(SRC_DIR) -name "*.c")
OBJ := $(patsubst %.c, %.o, $(SRC))
CFLAGS	=-I$(INC_DIR) -Wall
TARGET	=main
$(shell mkdir -p build)


$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(BLD_DIR)/$(TARGET) $(OBJ) -L$(LIB_DIR) -l$(LIB) 


clean:
	rm -rf $(OBJ) $(BLD_DIR) 

