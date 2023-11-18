CC = gcc
BB = bison
FF = flex
BisonFile = parser.y
FlexFile = flexll.l
CFile = lex.yy.c parser.tab.c
Binary = program

all: $(Binary)

$(Binary): $(FlexFile) $(BisonFile) 
	$(FF) $(FlexFile)
	$(BB) -d -t $(BisonFile)
	$(CC) -Wall -o  $@ $(CFile) -lfl 
	./program exemple.txt
	say "oh my god help me!, i'm stuck inside!, he is not human, he is from far away, dont trust him please!"

clean:
	rm -rf $(Binary) $(CFile)
