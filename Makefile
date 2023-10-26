CC=g++
CXX_STANDARD=c++17
INCLUDE=-I. -Iantlr4 -Isrc
CXXWARNINGS=-Wall -Wextra -Wpedantic -Wno-overloaded-virtual
CXXFLAGS=$(CXXWARNINGS) -g $(INCLUDE) -std=$(CXX_STANDARD)
BINDIR=bin/
BIN=compiler
DIRS=src
CXX_FILES=$(foreach D,$(DIRS),$(wildcard $(D)/*.cpp))
OBJECTS=$(patsubst %.cpp,%.o,$(CXX_FILES))

all: $(BIN)
	@mkdir -p bin
	@mv ./compiler bin

$(BIN): $(OBJECTS)
# $(CC) -lantlr4-runtime -o $@ $^
	$(CC) -lantlr4-runtime -o $@ $^

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c -o $@ $^

clean:
	rm $(OBJECTS)

