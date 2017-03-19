# Makefile
# Makefile for routing-service

CC=cc		#C compiler, cc is the native compiler
CFLAGS=-c	#flags/arguments for C compiler, -c means compile
LDFLAGS=	#linker files, blank, since the default behaviour is fine
#list of source files
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
OBJECTS=$(SOURCES:.c=.o)	#defines the name of object files
EXECUTABLE=routing-service	#indicates the final executable will be called routing-service

#targets
#the all target is the default target, indicating that first SOURCES would be dealt with,
# then EXECUTABLE and then print done
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
