cmake_minimum_required(VERSION 2.8.11)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC_ON)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

find_package(Qt5Widgets)

add_executable(ane ane.cpp)

qt5_use_modules(ane Gui Widgets WebKit WebKitWidgets)

foreach(dir ${dirs})
	message (STATUS "dir='${dir}'")
endforeach()


