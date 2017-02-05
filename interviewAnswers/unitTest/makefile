
CC=g++
CFLAGS=-c -Wall -I
LDFLAGS=

ifeq (g++, ${CC})
$(info ************  Compiler is for C++ ************)
else
$(info ************ unknown**********)
endif

SOURCE_DIRECTORY=.

INC_DIR1=../include
INC=$(INC_DIR1)
INC_PARAMS=$(foreach d, $(INC), -I$d)

SOURCES=$(SOURCE_DIRECTORY)/basicLinkedListTest.cpp 
OBJECTS=$(SOURCES:.cpp=.o)

EXECUTABLE=basicLinkedListTest

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(INC_PARAMS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $(INC_PARAMS) $< -o $@


