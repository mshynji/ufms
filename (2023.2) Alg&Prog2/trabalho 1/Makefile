CC = gcc
CFLAGS = -Wall -Wextra -std=c99

COMMON_SRCS = utils.c
COMMON_OBJS = $(COMMON_SRCS:.c=.o)

SELECTION_SRCS = selection_sort.c
SELECTION_OBJS = $(COMMON_OBJS) $(SELECTION_SRCS:.c=.o)
SELECTION_TARGET = selection_sort

INSERTION_SRCS = insertion_sort.c
INSERTION_OBJS = $(COMMON_OBJS) $(INSERTION_SRCS:.c=.o)
INSERTION_TARGET = insertion_sort

MERGE_SRCS = merge_sort.c
MERGE_OBJS = $(COMMON_OBJS) $(MERGE_SRCS:.c=.o)
MERGE_TARGET = merge_sort

QUICK_SRCS = quicksort.c
QUICK_OBJS = $(COMMON_OBJS) $(QUICK_SRCS:.c=.o)
QUICK_TARGET = quicksort

all: selection_sort insertion_sort merge_sort quicksort

selection_sort: $(SELECTION_TARGET)

$(SELECTION_TARGET): $(SELECTION_OBJS)
	$(CC) $(CFLAGS) -o $@ $(SELECTION_OBJS)

insertion_sort: $(INSERTION_TARGET)

$(INSERTION_TARGET): $(INSERTION_OBJS)
	$(CC) $(CFLAGS) -o $@ $(INSERTION_OBJS)

merge_sort: $(MERGE_TARGET)

$(MERGE_TARGET): $(MERGE_OBJS)
	$(CC) $(CFLAGS) -o $@ $(MERGE_OBJS)

quicksort: $(QUICK_TARGET)

$(QUICK_TARGET): $(QUICK_OBJS)
	$(CC) $(CFLAGS) -o $@ $(QUICK_OBJS)

clean:
	rm -f $(COMMON_OBJS) $(SELECTION_OBJS) $(SELECTION_TARGET) $(INSERTION_OBJS) $(INSERTION_TARGET) $(MERGE_OBJS) $(MERGE_TARGET) $(QUICK_OBJS) $(QUICK_TARGET)

.PHONY: selection_sort insertion_sort merge_sort quicksort clean

