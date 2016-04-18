CFLAGS=-Wall -g
CC=gcc

all: neuralNet

neuralNet:
	gcc -o neuralNet ./nn.c

clean:
	rm -f neuralNet
