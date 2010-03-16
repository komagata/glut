PROGRAM = game
SRCS = game.c
OBJS = $(subst .c,.o,$(SRCS))
CFLAGS = -framework GLUT -framework OpenGL

$(PROGRAM): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $< libglpng.a

.PHONY: clean

clean:
	$(RM) $(OBJS) $(PROGRAM)
