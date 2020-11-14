all: mymaths mymathd
mymaths: mains
mymathd: maind


mains: main.o libmyMath.a 
	gcc -Wall  main.o libmyMath.a -o mains

maind: main.o libmyMath.so
	gcc -Wall main.o libmyMath.so -o maind

libmyMath.so: power.o basicMath.o
	gcc -shared power.o basicMath.o -o libmyMath.so


libmyMath.a: powera.o basicMatha.o 
	ar -rcs libmyMath.a powera.o basicMatha.o

power.o: power.c myMath.h
	gcc -fPIC -c power.c 

powera.o:	power.c myMath.h
	gcc -c power.c  -o powera.o

basicMath.o: basicMath.c myMath.h
	gcc -fPIC -c basicMath.c 

basicMatha.o: basicMath.c myMath.h
	gcc -c basicMath.c -o basicMatha.o

clean:
	rm *.o *.a *.so maind mains

.PHONY: all mymathd mymaths