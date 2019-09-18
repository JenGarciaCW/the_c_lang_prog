SRC := src
PROG := prog

SOURCES := $(wildcard $(SRC)/*.c)
PROGRAMS := $(patsubst $(SRC)/%.c, $(PROG)/%.out, $(SOURCES))

all: $(PROGRAMS)
	
$(PROG)/%.out: $(SRC)/%.c
	$(CC) $< -o $@
	
clean:
	rm -f $(PROGRAMS)
