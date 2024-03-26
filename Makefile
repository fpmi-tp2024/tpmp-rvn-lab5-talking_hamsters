CC = gcc
CFLAGS = -Wall -Wextra
LDFLAGS = -lsqlite3
SRCDIR = src
BINDIR = bin
OBJDIR = obj

# Source files
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))
DEPS = $(wildcard $(SRCDIR)/*.h)

# Default
all: $(BINDIR)/run

# Build executable files
$(BINDIR)/run: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

# Compile exec file in object format
$(OBJDIR)/%.o: $(SRCDIR)/%.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

# Creating dirs if they are not exist
$(shell mkdir -p $(BINDIR) $(OBJDIR))

# Чистка
clean:
	rm -rf $(OBJDIR) $(BINDIR)