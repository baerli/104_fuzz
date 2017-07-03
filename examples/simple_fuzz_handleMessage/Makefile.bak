LIB60870_HOME=../..

PROJECT_BINARY_NAME = server_fuzz_handleMessage
PROJECT_SOURCES = server_fuzz_handleMessage.c
CC=clang++
CFLAGS=-g -fsanitize=address -fsanitize-coverage=trace-pc-guard

include $(LIB60870_HOME)/make/target_system.mk
include $(LIB60870_HOME)/make/stack_includes.mk

all:	$(PROJECT_BINARY_NAME)

include $(LIB60870_HOME)/make/common_targets.mk


$(PROJECT_BINARY_NAME):	$(PROJECT_SOURCES) $(LIB_NAME)
	clang++ $(CFLAGS) $(LDFLAGS) -g -o $(PROJECT_BINARY_NAME) $(PROJECT_SOURCES) $(INCLUDES) $(LIB_NAME) $(LDLIBS) /home/user/tools/libFuzzer.a

clean:
	rm -f $(PROJECT_BINARY_NAME)


