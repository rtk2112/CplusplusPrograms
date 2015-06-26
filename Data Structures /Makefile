
main: main.o myadd.o
	gcc main.o myadd.o -o main

main.o: main.c myadd.h
	gcc -c main.c

myadd.o: myadd.c myadd.h
	gcc -c myadd.c

.PHONY: clean
clean:
	rm -f *.o *~ a.out core main

