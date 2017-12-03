dirs := $(shell find . -maxdepth 1 -type d)
dirs := $(filter-out ./docs, ./.git, $(dirs))
dirs := $(basename $(patsubst ./%, %, $(dirs)))

all:
%:
	@for dir in $(dirs); do\
		make -C $$dir $@;\
	done
