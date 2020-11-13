CC = gcc
COMP_FLAG = -Wall 


all: mymaths mymathd mains maind

mains: main.o libmyMath.a 
	$(CC)  $(COMP_FLAG)   -o mains main.o libmyMath.a

maind: main.o libmyMath.so
	$(CC)  $(COMP_FLAG)   -o maind main.o ./libmyMath.so

mymaths: libmyMath.a
libmyMath.a: power.o basicMath.o myMath.h
	ar -rcs libmyMath.a  power.o basicMath.o

mymathd: libmyMath.so
libmyMath.so: power.o basicMath.o myMath.h
	$(CC) -shared -o libmyMath.so  power.o basicMath.o

main.o: main.c myMath.h
	$(CC) $(COMP_FLAG) -c $*.c
power.o: power.c 
	$(CC) $(COMP_FLAG) -c $*.c
basicMath.o: basicMath.c 
	$(CC) $(COMP_FLAG) -c $*.c

.PHONY: clean all mymaths mymathd

clean:
	rm -f *.a *.so *.o mains maind
		
	


