all: add-nbo

add-nbo:
	g++ -o add-nbo main.cpp

clean:
	rm -f add-nbo