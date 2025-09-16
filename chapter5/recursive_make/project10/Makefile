all: subdir/libhelper.a app

# Recurse into subdir to build libhelper.a
subdir/libhelper.a:
	$(MAKE) -C subdir

app: main.c subdir/libhelper.a
	$(CC) -o app main.c subdir/libhelper.a

clean:
	$(MAKE) -C subdir clean
	$(RM) app

