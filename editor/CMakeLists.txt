include_directories(
	"${CMAKE_CURRENT_SOURCE_DIR}"
	"/usr/local/include/"
)

get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)

foreach(dir ${dirs})
	message (STATUS "dir='${dir}'")
endforeach()

set(EXECUTABLE_NAME "ane")

add_executable(
	${EXECUTABLE_NAME}
	editor.cpp
	widget.cpp
	ane.cpp
)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2.1 REQUIRED system window graphics network audio)
target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})