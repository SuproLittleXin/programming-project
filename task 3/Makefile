
# code details

EXE_DIR = .
EXE = $(EXE_DIR)/task3

SRC= task3.c stdf.c test31.c

# generic build details

CC=      cc
COPT=    -g
CFLAGS= -lm

# compile to  object code

OBJ= $(SRC:.c=.o)

.c.o:
	$(CC) $(COPT) -c -o $@ $<

# build executable

$(EXE): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(EXE) 

# clean up compilation

clean:
	rm -f $(OBJ) $(EXE)

# dependencies

stdf.o: stdf.c quadtree.h
task3.o: task3.c quadtree.h
test31.o: test31.c quadtree.h



