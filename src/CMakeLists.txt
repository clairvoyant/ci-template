
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/gui)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)


set(INSTALL_HEADER_FILES
    ${CMAKE_CURRENT_BINARY_DIR}/include/StackCalc.hh
)

add_subdirectory(lib)
add_subdirectory(gui)


