cmake_minimum_required(VERSION 3.14)

project(hello-qvariant LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

add_executable(hello-qvariant
  main.cpp message.h message.cpp note.h note.cpp
)
target_link_libraries(hello-qvariant Qt${QT_VERSION_MAJOR}::Core)
