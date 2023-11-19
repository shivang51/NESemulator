CXX = clang++
CXX_VERSION = c++20

NAME = libgui

INCLUDE = -Iinclude/ -Iexternal/raylib/include 
SRC_DIR = src

INTERMEDIATE_DIR = ./out/obj/

TARGET_DIR = ../out/
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)

TARGET = $(TARGET_DIR)$(NAME).a

OBJECTS = $(patsubst %.cpp,$(INTERMEDIATE_DIR)%.o,$(SRC_FILES))
OBJECTS += external/raylib/include/raudio.o


$(NAME): $(TARGET)

$(TARGET): $(OBJECTS) | $(TARGET_DIR)
	ar rc $@ $(OBJECTS)

$(INTERMEDIATE_DIR)%.o: %.cpp | $(INTERMEDIATE_DIR)
	$(CXX) -std=$(CXX_VERSION) $(INCLUDE) -c $< -o $@

$(TARGET_DIR):
	mkdir -p $(TARGET_DIR)

$(INTERMEDIATE_DIR):
	mkdir -p $(INTERMEDIATE_DIR)src
