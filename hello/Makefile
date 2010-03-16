PROGRAM = hello
SRCS = hello.c
OBJS = $(subst .c,.o,$(SRCS))

CFLAGS = -framework GLUT -framework OpenGL

$(PROGRAM): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean

clean:
	$(RM) $(OBJS) $(PROGRAM)
