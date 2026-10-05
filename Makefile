SRCS = main.cpp Symbol_table.cpp Symbol_Retrieve.cpp print_ast.cpp
HDRS = ast.h Symbol_table.h Symbol_Retrieve.h print_ast.h

compiler: $(SRCS) $(HDRS) uC.g4
	antlr -Dlanguage=Cpp -no-listener -visitor -o generated uC.g4
	g++ -std=c++20 $(SRCS) generated/*.cpp -Igenerated -Iantlr4-runtime \
	    -lantlr4-runtime -o compiler

clean:
	/bin/rm -rf compiler generated

.PHONY: clean