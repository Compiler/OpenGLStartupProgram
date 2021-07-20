BUILD_SCRIPTS_ROOT = build_scripts

WIN_BUILD_SCRIPTS_LOC = $(BUILD_SCRIPTS_ROOT)\\build_scripts_windows\\
LINUX_BUILD_SCRIPTS_LOC = $(BUILD_SCRIPTS_ROOT)/build_scripts_linux/

BUILD_LOC = $(WIN_BUILD_SCRIPTS_LOC) #defaults to windows
EXTENSION = .bat 
PRE_BUILD = 

ifeq ($(OS),Windows_NT)
	BUILD_LOC = $(WIN_BUILD_SCRIPTS_LOC)
	EXTENSION = .bat
else
    UNAME_S := $(shell uname -s)
    ifeq ($(UNAME_S),Linux)
		BUILD_LOC = $(LINUX_BUILD_SCRIPTS_LOC)
		EXTENSION = .sh
		PRE_BUILD = chmod 777 build_scripts/* ; chmod 777 build ; chmod 777 build/*
	endif
endif

all: main

main:
	$(PRE_BUILD)
	$(BUILD_LOC)build$(EXTENSION)

launch:
	$(PRE_BUILD)
	$(BUILD_LOC)build_run$(EXTENSION)

run:
	$(PRE_BUILD)
	$(BUILD_LOC)run$(EXTENSION)

clean:
	$(PRE_BUILD)
	$(BUILD_LOC)clean$(EXTENSION)

