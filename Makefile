BUILD_SCRIPTS_ROOT = build_scripts

WIN_BUILD_SCRIPTS_LOC = $(BUILD_SCRIPTS_ROOT)\\build_scripts_windows\\
LINUX_BUILD_SCRIPTS_LOC = $(BUILD_SCRIPTS_ROOT)/build_scripts_linux/

BUILD_LOC = $(WIN_BUILD_SCRIPTS_LOC) #defaults to windows
EXTENSION = .bat 

ifeq ($(OS),Windows_NT)
	BUILD_LOC = $(WIN_BUILD_SCRIPTS_LOC)
	EXTENSION = .bat
else
    UNAME_S := $(shell uname -s)
    ifeq ($(UNAME_S),Linux)
		BUILD_LOC = $(LINUX_BUILD_SCRIPTS_LOC)
		EXTENSION = .sh
	endif
endif

all: main

main:
	$(BUILD_LOC)build$(EXTENSION)

launch:
	$(BUILD_LOC)build_run$(EXTENSION)

run:
	$(BUILD_LOC)run$(EXTENSION)

clean:
	$(BUILD_LOC)clean$(EXTENSION)

