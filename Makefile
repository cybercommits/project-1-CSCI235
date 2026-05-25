CXX       = g++
CXXFLAGS  = -std=c++11 -Wall -Wextra -Wpedantic -g

TARGET    = main
SOURCES   = main.cpp \
            Vector3D.cpp \
            Rotation.cpp \
            EulerRotation.cpp \
            AxisAngleRotation.cpp \
            QuaternionRotation.cpp

OBJECTS   = $(SOURCES:.cpp=.o)

# Default target
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Utility targets
clean:
	rm -f $(OBJECTS) $(TARGET)

rebuild: clean all

.PHONY: all clean rebuild
