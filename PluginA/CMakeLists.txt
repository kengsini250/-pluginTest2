cmake_minimum_required(VERSION 3.14)

project(PluginA LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

add_library(PluginA SHARED
   ../PluginTest/PluginInterface.h

  PluginA_global.h
  plugina.cpp
  plugina.h
  form.ui
)

target_link_libraries(PluginA PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

target_compile_definitions(PluginA PRIVATE PLUGINA_LIBRARY)
