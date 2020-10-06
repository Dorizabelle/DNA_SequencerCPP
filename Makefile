# Dorizabelle Northecide
# Software Development
# HW01

# Makefile for DNA Sequencer


all: compile clean

compile:
	g++ -c Organism.cpp
	g++ Organism.h  main.cpp -o DNA_Sequencer

clean:
	@rm -f *.o compile

