CC = gcc
CFLAGS = -W -Wall
TARGET = contacts
OBJECTS = main.o contact.o manager.o
all : $(TARGET)
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o contacts
