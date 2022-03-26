INCLUDES=-I../include
LINKLIBS=-L../libs/glad -L../libs/glfw -lglfw3 -lopengl32 -lgdi32 #-luser32 -lkernel32

SRC_DIR := ../src
OBJ_DIR := obj

all: a.exe

glad.o: ../libs/glad/glad.c
	gcc -c $(INCLUDES) ../libs/glad/glad.c


a.exe: ../src/main.cpp glad.o
	g++ $(INCLUDES) ../src/main.cpp ../libs/glad/glad.c -o main.exe $(LINKLIBS)
