#Declaration of variables
CC 	= g++
CC_FLAGS= -w
OMP	= -fopenmp

# File names
EXEC 	= run
SOURCES	= $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

# default 
all:	$(EXEC) $(SOURCES)

# Main target
$(EXEC):$(OBJECTS)
	$(CC) $(OMP) $(OBJECTS) -o $(EXEC)

# To obtain object files
.c.o:
	$(CC) -c $(CC_FLAGS) $(OMP) $< -o $@

# To remove generated files
clean:
	rm -f $(EXEC) $(OBJECTS)
