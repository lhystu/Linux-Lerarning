procbar:Main.o Procbar.o
	gcc $^ -o $@
%.o:%.c
	gcc -c $<

.PHONY:clean
clean:
	rm -f procbar *.o

