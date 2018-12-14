CC	=gcc
OBJ	=main.o add_function.o mul_function.o
CFLAGS	=-fPIC
TARGET	=main

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)


dlib:
	$(CC) -shared -o libmydlib.so add_function.o mul_function.o


clean:
	rm -f $(OBJ) $(TARGET) libmydlib.so


