# Makefile
# Makefile for routing-service

CC=cc			#C compiler
CFLAGS=-c		#list of flags to pass to the compilation command
LDFLAGS=		#linker files=default

#list of source files
SOURCES=src/exitservice.c \
		src/function_handling.c \
        src/info_and_initialisation/init.c \
        src/info_and_initialisation/SIT_distances.c \
        src/info_and_initialisation/SIT_landmarks.c \
        src/info_and_initialisation/sourceval.c \
        src/info_and_initialisation/destinationval.c \
        src/algorithms/dijkstra.c \
        src/algorithms/shortest_path.c \
        src/algorithms/strcompare_case_insensitive.c \
        src/main.c
#defining list of object files
OBJECTS=$(SOURCES:.c=.o)
#setting name of final executable
EXECUTABLE=routing-service

#targets
all: $(SOURCES) $(EXECUTABLE) done

$(EXECUTABLE): $(OBJECTS)
	@echo Linking...	#print Linking...
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

#Creating object files from .c files
.c.o:
	@echo Compiling...	#print Compiling...
	$(CC) $(CFLAGS) $< -o $@

#To remove object files(.o) and precompiled header files (.gch)
clean:
	@echo Cleaning...	#print Cleaning...
	find . -name "*.o" -type f -delete
	find . -name "*.gch" -type f -delete
	strip $(EXECUTABLE)

done:
	@echo Done!		#print Done!

# end of Makefile
