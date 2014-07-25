bin_PROGRAMS = hello		# build some programs and these programs will be install in "bindir"
hello_SOURCES = main.c		# to create hello, just compile main.c

hello_CPPFLAGS = $(glib_CFLAGS) \
				 $(wavpack_CFLAGS)

hello_LDFLAGS = $(glib_LIBS) \
				$(wavpack_LIBS)
