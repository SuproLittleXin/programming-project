
# code details

EXE_DIR = .
EXE = $(EXE_DIR)/task1

SRC= task1.c stdf.c test12.c

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
task1.o: task1.c quadtree.h
test12.o: test12.c quadtree.h



