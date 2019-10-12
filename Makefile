CXX=g++
CXXFLAGS=-std=c++11 -I/usr/include/opencv4 -I/usr/include/qt/QtCore -I/usr/include/qt -fPIC
LDFLAGS=-lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_videoio -lQt5Core
BIN=main

all:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(BIN) main_template.cpp camera.cpp

clean:
	rm -f $(BIN)

.PHONY: clean
