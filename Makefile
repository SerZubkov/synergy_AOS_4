# Определение компилятора
CXX=g++

# Опции компилятора, C++11 для поддержки инициализации списками
CXXFLAGS=-std=c++11

# Имя исполняемого файла
TARGET=print_coordinates

# Исходный код
SRC=print_coordinates.cpp

# Цель по умолчанию
all: $(TARGET)

# Как собрать цель
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# Цель для очистки проекта
clean:
	rm -f $(TARGET)

# Цель для запуска программы
run: $(TARGET)
	./$(TARGET)
