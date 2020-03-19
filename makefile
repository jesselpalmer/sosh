all: main.c
	gcc -g -Wall -o main.o main.c
     
clean:
	 rm main.o
