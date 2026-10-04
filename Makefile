compiler: main.cpp uC.g4
	antlr -Dlanguage=Cpp -no-listener -no-visitor -o generated uC.g4
	g++ -std=c++20 main.cpp generated/*.cpp -Igenerated -Iantlr4-runtime \
	    -lantlr4-runtime -o compiler

clean:
	/bin/rm -rf compiler generated

.PHONY: clean