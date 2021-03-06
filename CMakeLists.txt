project(CITemplate)

cmake_minimum_required(VERSION 3.2)

set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
set(VERSION_PATCH 1)
set(SO_VERSION 1)
set(VERSION_STRING ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH})
mark_as_advanced(VERSION_MAJOR VERSION_MINOR VERSION_PATCH VERSION_STRING)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/modules")

find_package(Qt5 REQUIRED COMPONENTS Core Network Xml)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

include_directories(${Qt5Core_INCLUDE_DIRS})
include_directories(${Qt5Network_INCLUDE_DIRS})
include_directories(${Qt5Xml_INCLUDE_DIRS})

include(GNUInstallDirs)

option(BUILD_TESTS "Build tests." ON)
option(BUILD_INTERNAL_TESTS "Build internal tests." OFF)
option(BUILD_DOCUMENTATION "Build API documentation." OFF)
option(BUILD_EXAMPLES "Build examples." ON)

add_subdirectory(src)

if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()

if(BUILD_DOCUMENTATION)
    add_subdirectory(doc)
endif()

include(CMakePackageConfigHelpers)

configure_package_config_file(
    CITemplate.pc.in
    ${CMAKE_CURRENT_BINARY_DIR}/CITemplateConfig.cmake
    INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/CITemplate"
)

write_basic_package_version_file(
    ${CMAKE_CURRENT_BINARY_DIR}/CITemplateConfigVersion.cmake
    VERSION ${VERSION_STRING}
    COMPATIBILITY SameMajorVersion
)

install(
	FILES ${CMAKE_CURRENT_BINARY_DIR}/CITemplateConfig.cmake
	${CMAKE_CURRENT_BINARY_DIR}/CITemplateConfigVersion.cmake
        DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/CITemplate"
    COMPONENT Devel
)

# Generate CITemplate.pc
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/CITemplate.pc.in ${CMAKE_CURRENT_BINARY_DIR}/CITemplate.pc @ONLY)
install(
    FILES ${CMAKE_CURRENT_BINARY_DIR}/CITemplate.pc
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/pkgconfig"
    COMPONENT Devel
)

