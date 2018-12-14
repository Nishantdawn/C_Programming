CC	=gcc
OBJ	=main.o
LIB	=myslib
LIB_DIR	=./
TARGET	=main

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ) -L$(LIB_DIR) -l$(LIB)


clean:
	rm -f $(OBJ) $(TARGET) 

