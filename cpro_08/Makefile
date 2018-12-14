CC	=gcc
OBJ	=main.o add_function.o mul_function.o
TARGET	=main

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)


slib:
	ar -cvq libmyslib.a add_function.o mul_function.o


clean:
	rm -f $(OBJ) $(TARGET) libmyslib.a


