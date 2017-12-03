SRC_DIR := ./.
BIN_DIR := ./bin
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
BIN_FILES := $(patsubst $(SRC_DIR)/%.cpp, $(BIN_DIR)/%, $(SRC_FILES))

all: $(BIN_FILES)

$(BIN_DIR)/%: $(SRC_DIR)/%.cpp
	mkdir -p bin
	g++ $^ -o $@

clean:
	rm -Rf bin
