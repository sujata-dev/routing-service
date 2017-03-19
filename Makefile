# Makefile
# Makefile for routing-service

CC=cc
CFLAGS=-c
LDFLAGS=

SOURCES=src/exitservice.c \
        src/info_and_initialisation/init.c \
        src/info_and_initialisation/SIT_distances.c \
        src/info_and_initialisation/SIT_landmarks.c \
        src/info_and_initialisation/sourceval.c \
        src/info_and_initialisation/destinationval.c \
        src/algorithms/dijkstra.c \
        src/algorithms/shortest_path.c \
        src/algorithms/strcompare_case_insensitive.c \
        src/main.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=routing-service

all: $(SOURCES) $(EXECUTABLE) done

$(EXECUTABLE): $(OBJECTS)
	@echo Linking...
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	@echo Compiling...
	$(CC) $(CFLAGS) $< -o $@

clean:
	@echo Cleaning...
	find . -name "*.o" -type f -delete
	find . -name "*.gch" -type f -delete
	strip $(EXECUTABLE)

done:
	@echo Done!

# end of Makefile
