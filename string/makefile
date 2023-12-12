string:demoMystring.o myString.o
	gcc demoMystring.o myString.o -o string

demoMystring.o:demoMystring.c
	gcc -c demoMystring.c -o demoMystring.o

myString.o:myString.c
	gcc -c myString.c -o myString.o

clean:
	@rm -rf *.o string