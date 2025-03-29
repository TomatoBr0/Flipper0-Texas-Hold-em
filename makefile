# Compiler settings: change CC to arm-none-eabi-gcc for Flipper Zero builds
CC = gcc
CFLAGS = -Iinclude -O2 -Wall
LDFLAGS = 

# Source files
SRCS = src/main.c src/game.c src/ui.c src/ai.c src/winrate.c

# Object files
OBJS = $(SRCS:.c=.o)

# Output file (change extension as needed for Flipper Zero, e.g., .elf or .fap)
TARGET = texas_holdem.elf

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
