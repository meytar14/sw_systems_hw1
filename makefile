all: mymaths mymathd
mymaths: mains
mymathd: maind


mains: main.o libmyMath.a 
    gcc -Wall  main.o libmyMath.a -o mains

maind: main.o libmyMath.so
	gcc -Wall main.o libmyMath.so -o maind

libmyMath.so: power.o basicMath.o


libmyMath.a: power.o basicMath.o 
	gcc -c power.o basicMath.o -o libmyMath.a


power.o: power.c myMath.h
		gcc -c power.c 

basicMath.o: basicMath.c myMath.h
	gcc -c basicMath.c

clean:
	rm *.o *.a *.so maind mains
.PHONY: all mymathd mymaths