program: main.c
	gcc main.c -o raycast

.PHONY: clean

clean: 
	rm raycast
