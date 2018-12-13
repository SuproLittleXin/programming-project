
# code details

EXE_DIR = .
EXE = $(EXE_DIR)/task3

SRC= task3extended.c stdf.c test32.c

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
task3extended.o: task3extended.c quadtree.h
test32.o: test32.c quadtree.h



