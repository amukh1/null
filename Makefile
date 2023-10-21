all:
	g++ *.cpp -Iantlr4 -std=c++17 -L. -lantlr4-runtime 
