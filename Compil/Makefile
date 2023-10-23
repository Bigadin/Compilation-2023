CC=gcc
CFLAGS= -O3 -lfl -ly -g
DEBUG=-g
LEX=flex
PARSE=bison
DIR=$(realpath .)
SRCDIR=$(DIR)/src
TARGET=test
LEXER=$(SRCDIR)/lexer
PARSER=$(SRCDIR)/parser
SYM=$(SRCDIR)/sym_table
MAIN=$(SRCDIR)/main.c


.PHONY: clean

$(TARGET): $(MAIN) $(LEXER).c $(PARSER).c $(SYM).c
	$(CC)  -o $@ $^ $(CFLAGS) $(DEBUG)

$(PARSER).c: $(PARSER).y
	$(PARSE) -d -o $@ $<

$(LEXER).c: $(LEXER).l
	$(LEX) -o $@ $<


clean: 
	rm  $(LEXER).c
	rm  $(PARSER).c
	rm  $(PARSER).h





