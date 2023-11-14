CC = gcc
BB = bison
FF = flex
BisonFile = parser.y
FlexFile = flexll.l
CFile = lex.yy.c parser.tab.c
Binary = program

all: $(Binary)

$(Binary): $(FlexFile) $(BisonFile) 
	$(BB) -d -t $(BisonFile)
	$(FF) $(FlexFile)
	$(CC) -o $@ $(CFile)
	./program Checker/Tester.txt

clean:
	rm -rf $(Binary) $(CFile)
