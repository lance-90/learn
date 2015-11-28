run : main.o add.o sub.o mul.o dev.o
	cc -o run main.o add.o \
		sub.o mul.o dev.o

add.o : add.c common.h
	cc -c add.c
sub.o : sub.c common.h
	cc -c sub.c
mul.o : mul.c common.h
	cc -c mul.c
dev.o : dev.c common.h
	cc -c dev.c
main.o : main.c common.h
	cc -c main.c

clean :
	rm add.o sub.o mul.o dev.o











# zhe shi yi tiao  zhu shi
