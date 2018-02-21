main: main.c add_function.c mul_function.c
	gcc -save-temps  -o main  main.c add_function.c mul_function.c -I.
slib:
	ar -cvq libmylib.a add_function.o mul_function.o

clean:
	rm -f main *.i *.o *.s *.a
