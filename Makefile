program: main.c
	gcc -lglut -lGLU -lGL main.c -o raycast

.PHONY: clean

clean: 
	rm raycast
