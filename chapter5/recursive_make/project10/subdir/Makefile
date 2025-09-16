# Builds a static library libhelper.a from helper.o

libhelper.a: helper.o
	ar rcs libhelper.a helper.o

helper.o: helper.c
	$(CC) -c helper.c -o helper.o

clean:
	$(RM) *.o *.a

