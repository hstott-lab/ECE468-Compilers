ANTLR_JAR ?= $(HOME)/antlr/antlr-4.13.1-complete.jar
ANTLR_INC ?= /usr/local/include/antlr4-runtime
ANTLR_LIB ?= /usr/local/lib

compiler: main.cpp uC.g4
	java -jar $(ANTLR_JAR) -Dlanguage=Cpp -visitor -no-listener -o generated uC.g4
	g++ -std=c++20 main.cpp generated/*.cpp -Igenerated \
	    -I$(ANTLR_INC) -L$(ANTLR_LIB) \
	    -lantlr4-runtime -Wl,-rpath,$(ANTLR_LIB) -o compiler

clean:
	/bin/rm -rf compiler generated

.PHONY: clean