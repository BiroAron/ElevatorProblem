# the compiler: gcc for C program, define as g++ for C++
CL= g++
# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CPPFLAGS  = -g -Wall -std=c++11 -I src/include/
 
SRC_DIR := src
OBJ_DIR := obj
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
LDFLAGS := -L /usr/local/lib/
# The build target 
TARGET = wman
all: $(TARGET)
$(TARGET): $(OBJ_FILES)
	$(CL) $(LDFLAGS) -o $@ $^
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CL) $(CPPFLAGS) -c -o $@ $<
clean:
	$(RM) -r $(OBJ_DIR)
	$(RM) $(TARGET)