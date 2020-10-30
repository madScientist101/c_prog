
# CFLAGS=-Wall -g
all:
	mkdir compiled
	cc -Wall -g ex1.c -o compiled/ex1
	cc -Wall -g ex3.c -o compiled/ex3
	cc -Wall -g ex7.c -o compiled/ex7
	cc -Wall -g ex8.c -o compiled/ex8
	cc -Wall -g ex9.c -o compiled/ex9

clean:
	rm -rf compiled
	rm -rf debug

# debug:
# 	mkdir debug
# 	cc -Wall -g ex7.c 
