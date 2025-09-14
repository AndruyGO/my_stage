
all : menu

menu : menu.o min.o sum.o max.o diff.o
	gcc menu.o min.o sum.o max.o diff.o -o menu
	mv menu ../
	make clean


menu.o : menu.c max.h min.h diff.h sum.h
	gcc -c menu.c -o menu.o


min.o : min.c min.h
	gcc -c min.c -o min.o

sum.o : sum.c sum.h
	gcc -c sum.c -o sum.o

max.o : max.c max.h
	gcc -c max.c -o max.o

diff.o : diff.c diff.h
	gcc -c diff.c -o diff.o

clean :
	rm *.o
