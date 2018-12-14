CC	=gcc
OBJ	=main.o
LIB	=mydlib
LIB_DIR	=./
TARGET	=main

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ) -L$(LIB_DIR) -l$(LIB)


clean:
	rm -f $(OBJ) $(TARGET) 

