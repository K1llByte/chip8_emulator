CC=g++
FLAGS = -Wall -Wextra -Wshadow -pedantic -std=c++2a -O2
# LIB_FLAGS = -lglut -lGL -lGLU -lGLEW -lIL -lm

TARGET=bin/chip8_emulator

SOURCE=src

all: bin_directory compile

bin_directory:
	@mkdir -p bin/

compile: $(SOURCE)/main.cpp $(SOURCE)/chip8.cpp 
	$(CC) $(FLAGS) $^ -o $(TARGET)

clean:
	rm -rf bin/

run:
	./$(TARGET)