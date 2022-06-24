#define the compiler to be used 
cc = gcc 
CFLAGS = -std=c11 -Wall -Wextra -fmax-errors=10 
LFlags = 
LIBS = -lm
OBJFILES = TheCode.o similarFloor.o CbSelection.o CreatePlace.o loadestimation.o printResult.o

Main = TheCode

all :$(Main)

$(Main) : $(OBJFILES)
	$(cc) $(CFLAGS) $(LFlags) -o $(Main) $(OBJFILES)
%.o : %.c
	$(cc) $(CFLAGS) -c $< -o $@ 
clean:
	rm -f $(OBJFILES) $(Main)