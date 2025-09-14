
all : menu

menu : menu.o min.o sum.o max.o diff.o
	gcc menu.o min.o sum.o max.o diff.o -o menu
	mv menu ../
	make clean


menu.o : menu.c menu.h
	gcc -c menu.c -o menu.o


min.o : min.c menu.h
	gcc -c min.c -o min.o

sum.o : sum.c menu.h
	gcc -c sum.c -o sum.o

max.o : max.c menu.h
	gcc -c max.c -o max.o

diff.o : diff.c menu.h
	gcc -c diff.c -o diff.o

clean :
	rm *.o
