quicksort : quicksort.o
	gcc -o quicksort quicksort.o
quicksort.o : quicksort.c
	gcc -c quicksort.c
clean :
	rm quicksort quicksort.o
