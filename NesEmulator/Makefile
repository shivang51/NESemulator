CXX = clang++
CXX_VERSION = c++20

NAME = nesemulator

TARGET_DIR = ../out

SRC_DIR = src

INCLUDE = -I./include/ -I../Gui -I../NesCore -I../Gui/external/raylib/include

LIB_INCLUDE_DIRS = -L$(TARGET_DIR) -L../Gui/external/raylib/lib

LIBS = -lraylib -lGL -lgui -lnescore 

INTERMEDIATE_DIR = ./out/obj/

SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
LIB_FILES = $(wildcard $(TARGET_DIR)/*.a)

TARGET = $(TARGET_DIR)/$(NAME)

OBJECTS = $(patsubst %.cpp,$(INTERMEDIATE_DIR)%.o,$(SRC_FILES))

LDFLAGS = $(LIB_INCLUDE_DIRS) $(LIBS)
COMPILE_FLAGS = -W -Wall

$(NAME): $(TARGET)

$(TARGET): $(OBJECTS) $(LIB_FILES)
	$(CXX) -o $@ $(OBJECTS) -std=$(CXX_VERSION) $(COMPILE_FLAGS) $(LDFLAGS) 

$(INTERMEDIATE_DIR)%.o: %.cpp | $(INTERMEDIATE_DIR)
	$(CXX) -o $@ -c $< -std=$(CXX_VERSION) $(INCLUDE) $(COMPILE_FLAGS) 

$(TARGET_DIR)/%.a:
	$(info checking $@)


$(INTERMEDIATE_DIR):
	mkdir -p $(INTERMEDIATE_DIR)src
