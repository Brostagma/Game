# Derleyici ve bayraklar
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Klasör Tanımları
SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = bin
DEBUG_DIR = debug

# Kaynak ve Nesne Dosyalarını Belirleme
SRCS := $(wildcard $(SRC_DIR)/*.cpp) main.cpp
OBJS := $(patsubst %.cpp, $(BUILD_DIR)/%.o, $(notdir $(SRCS)))

# Çıktı dosyasının adı
TARGET = $(DEBUG_DIR)/console_game

# Varsayılan Hedef
all: dirs $(TARGET) info

# Klasörlerin Oluşturulması
dirs:
	@mkdir -p $(BUILD_DIR)
	@mkdir -p $(DEBUG_DIR)

# Çıktı dosyasının oluşturulması
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Nesne dosyalarının oluşturulması
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

$(BUILD_DIR)/main.o: main.cpp
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Temizlik
clean:
	@echo "Cleaning up..."
	@rm -rf $(BUILD_DIR) $(DEBUG_DIR)

# Bilgi Mesajı
info:
	@echo "===== Build Information ====="
	@echo "Compiler: $(CXX)"
	@echo "Compiler Flags: $(CXXFLAGS)"
	@echo "*****************************************"
	@echo "Source Files: $(SRCS)"
	@echo "*****************************************"
	@echo "Object Files: $(OBJS)"
	@echo "*****************************************"
	@echo "Target: $(TARGET)"
	@echo "============================="
