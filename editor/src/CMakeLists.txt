include_directories(
	"${CMAKE_CURRENT_SOURCE_DIR}/../include"
)

get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
foreach(dir ${dirs})
  message(STATUS "dir='${dir}'")
endforeach()

add_executable(anedit
	anedit.cpp
)

target_link_libraries(anedit

)

set_target_properties(anedit PROPERTIES DEBUG_POSTFIX _d)