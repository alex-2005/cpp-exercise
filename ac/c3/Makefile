SRC_DIR := ./.
DBG_DIR := ./bin/debug
REL_DIR := ./bin/release
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
DBG_FILES := $(patsubst $(SRC_DIR)/%.cpp, $(DBG_DIR)/%, $(SRC_FILES))
REL_FILES := $(patsubst $(SRC_DIR)/%.cpp, $(REL_DIR)/%, $(SRC_FILES))
DBG_FLAGS := -Wall -Wno-unused-result -g -DCON_IO
REL_FLAGS := -Wall -Wno-unused-result -O2

all: $(DBG_FILES) $(REL_FILES)

$(DBG_DIR)/%: $(SRC_DIR)/%.cpp
	mkdir -p $(DBG_DIR)
	g++ $(DBG_FLAGS) $^ -o $@

$(REL_DIR)/%: $(SRC_DIR)/%.cpp
	mkdir -p $(REL_DIR)
	g++ $(REL_FLAGS) $^ -o $@

clean:
	rm -Rf bin
