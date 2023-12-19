SRC=src
DEST=compiled
# Nombre de la ejecutable
TARGET = programa

# Compilador de C++
CXX = g++

# Opciones de compilación
CXXFLAGS = -std=c++17 -O3 -march=native

# Opciones de OpenMP
CXXFLAGS += -fopenmp

# Opciones de MPI
MPICXX = mpicxx
MPIFLAGS = -DMPICH_SKIP_MPICXX -ID:/Microsoft SDKs/MPI/Include -LD:/Microsoft SDKs/MPI/Lib -lmpi

# Opciones de memoria vectorial
CXXFLAGS += -mavx2

# Objetos generados
OBJECTS = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
    $(MPICXX) $(CXXFLAGS) $(MPIFLAGS) $(OBJECTS) -o $@

.cpp.o:
    $(CXX) $(CXXFLAGS) -c $(OBJECTS) -o $@

clean:
    rm -f $(TARGET) $(OBJECTS)

.PHONY: all clean
