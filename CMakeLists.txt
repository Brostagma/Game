# Minimum CMake sürümü
cmake_minimum_required(VERSION 3.15)

# Proje adı ve dili
project(Game LANGUAGES CXX)

# C++ standardı
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Kaynak dosyalarının otomatik olarak algılanması
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/src/*.cpp" "${CMAKE_SOURCE_DIR}/main.cpp")

# Çıktı dosyasının proje kök dizinindeki `debug/` klasörüne yerleştirilmesi
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/)

# Çıktı dosyasını oluştur
add_executable(brostagma_game ${SRC_FILES})

# Include dizinini ekle
target_include_directories(brostagma_game PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Derleme sonrası bilgi mesajı
add_custom_command(TARGET brostagma_game POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E echo "===== Build Information ====="
    COMMAND ${CMAKE_COMMAND} -E echo "Project: ${PROJECT_NAME}"
    COMMAND ${CMAKE_COMMAND} -E echo "Build Type: ${CMAKE_BUILD_TYPE}"
    COMMAND ${CMAKE_COMMAND} -E echo "Source Files: ${SRC_FILES}"
    COMMAND ${CMAKE_COMMAND} -E echo "Output Directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}"
)
