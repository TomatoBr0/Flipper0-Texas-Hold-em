# Compiler settings
CC = arm-none-eabi-gcc
CFLAGS = -Iinclude -O2 -Wall
LDFLAGS = 

# Source files
SRCS = src/main.c src/game.c src/ui.c src/ai.c src/winrate.c

# Object files
OBJS = $(SRCS:.c=.o)

# Output file (change extension as needed, e.g., .elf or .fap for Flipper)
TARGET = texas_holdem.elf

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
