101:
	nasm -f elf64 101-*.asm
	gcc 101-*.o
	./a.out
4: file = 3-a*.c 0-p*.c
3: file = 0-p*.c
2: file = 0-p*.c
%:
	./checker $*-*.c $(file)
