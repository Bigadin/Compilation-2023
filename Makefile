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
	

clean:
	rm -rf $(Binary) $(CFile)
