
# CFLAGS=-Wall -g
all:
	mkdir compiled
	cc -Wall -g ex1.c -o compiled/ex1
	cc -Wall -g ex3.c -o compiled/ex3
	cc -Wall -g ex7.c -o compiled/ex7
	cc -Wall -g ex8.c -o compiled/ex8
	cc -Wall -g ex9.c -o compiled/ex9
	cc -Wall -g ex14.c -o compiled/ex14
	cc -Wall -g ex16.c -o compiled/ex16

	cc -Wall -g -DNDEBUG -c -o ex22/ex22.o ex22/ex22.c
	cc -Wall -g -DNDEBUG ex22/ex22_main.c ex22/ex22.o -o compiled/ex22_main

clean:
	rm -rf compiled
	rm -rf debug

# debug:
# 	mkdir debug
# 	cc -Wall -g ex7.c 

