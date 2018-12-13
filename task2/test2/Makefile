
# code details

EXE_DIR = .
EXE = $(EXE_DIR)/task2

SRC= task2.c stdf.c test22.c

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
task2.o: task2.c quadtree.h
test22.0: test22.c quadtree.h



